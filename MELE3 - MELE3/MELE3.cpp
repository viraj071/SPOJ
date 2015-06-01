/*
 * MELE3.cpp
 *
 *  Created on: May 31, 2015
 *      Author: viraj
 */

#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>

using namespace std;

typedef pair<int,int> ii;
typedef vector<vector<pair<int,ii> > > vviii;
#define se second
#define fi first
#define pb push_back

const int INF = 0x3f3f3f3f;
int k,n;
vviii neighbors;
vector<int> dist;


void dijkstras(){
	priority_queue<ii,vector<ii>,greater<ii> > pq;
	pq.push(ii(0,1));
	dist[1] = 0;
	while(!pq.empty()){
		ii top = pq.top();
		pq.pop();
		int node = top.se;
		int current_time = top.fi; // current time
		for(int i = 0;i<(int)neighbors[node].size();++i){
			int start_time = neighbors[node][i].se.fi; //start time for elevator
			int trip_time = neighbors[node][i].se.se;
			int n = neighbors[node][i].fi;
			int wait_time;
			if(start_time>=current_time){ // if start time is greater than current time that means we will have to wait
				wait_time = start_time-current_time;
			}
			else{
				// else if at current time the lift is not present we find the waiting time.
				int temp = (current_time-start_time)%trip_time;
				wait_time = temp==0 ? 0 : trip_time - temp;
			}
			if(dist[n]>current_time+wait_time+trip_time/2){ //time at which the lift reaches is current time + wait time + trip time /2
				dist[n]=current_time+wait_time+trip_time/2;
				pq.push(ii(dist[n],n));
			}
		}
	}
}

int main(){
	while(scanf("%d %d",&k,&n)>0){
		neighbors = vviii(k+1,vector<pair<int,ii> > ());
		int u,v;
		dist = vector<int> (k+1,INF);
		while(n--){
			scanf("%d %d",&u,&v);
			neighbors[u].pb(pair<int,ii>(v,ii(0,2*(v-u)))); // add starttime for the elevator along with trip time
			neighbors[v].pb(pair<int,ii>(u,ii(v-u,2*(v-u))));
		}
		dijkstras();
		printf("%d\n",dist[k]*5);
	}
	return 0;
}
