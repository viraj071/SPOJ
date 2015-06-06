/*
 * GONDOR.cpp
 *
 *  Created on: Jun 3, 2015
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

typedef pair<double,int> di;
typedef pair<int,int> ii;
#define se second
#define fi first
#define pb push_back

const int INF = 0x3f3f3f3f;
vector<ii> coordinates;
vector<vector<int> > target;
vector<int> arrows;
vector<double> dist;

int n;

double getDistance(int node1,int node2){
	ii a = coordinates[node1];
	ii b = coordinates[node2];
	return sqrt((b.fi-a.fi)*(b.fi-a.fi)+(b.se-a.se)*(b.se-a.se));
}

void dijkstras(){
	priority_queue<di,vector<di>,greater<di> > pq;
	pq.push(di(0.0,0));
	dist[0] = 0.0;
	while(!pq.empty()){
		di top = pq.top();
		pq.pop();
		int node = top.se;
		if(dist[node]<top.fi){
			continue;
		}
		int iarrows = arrows[node];
		for(int i=0;i<n-1;++i){
			double dis = getDistance(node,target[node][i]);
			if((dist[target[node][i]]>top.fi)&&iarrows){
				iarrows--;
				if(dist[target[node][i]] > top.fi + dis){
					dist[target[node][i]] = top.fi + dis;
					pq.push(di(dist[target[node][i]],target[node][i]));
				}
			}
		}
	}
}

int main(){
	while(scanf("%d",&n)>0){
		coordinates = vector<ii>(n,ii());
		dist = vector<double> (n,999999.9);
		arrows = vector<int> (n,0);
		target = vector<vector<int> > (n,vector<int> (n-1,0));
		for(int i=0;i<n;++i){
			int x,y,s,targets;
			scanf("%d %d %d",&x,&y,&s);
			coordinates[i] = ii(x,y);
			arrows[i] = s;
			for(int j=0;j<n-1;++j){
				scanf("%d",&targets);
				target[i][j] = targets-1;
			}
		}
		dijkstras();
		for(int i=0;i<n;++i){
			cout<<dist[i]<<endl;
		}
	}
	return 0;
}

