/*
 * TRAFFICN.cpp
 *
 *  Created on: May 30, 2015
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

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define se second
#define fi first
#define pb push_back
int n,m,k,s,t;

vector<vii> dist;
vector<vii> rdist;

const int INF = 0x3f3f3f3f;

vi dists(10002,INF); //distance from source s to node
vi distt(10002,INF); //distance from node to target

void dijkstras(int source, vector<vii> &v,vector<int> &distance){
	priority_queue<ii,vii,greater<ii> > pq;
	pq.push(ii(0,source));
	distance[source]=0;
	while(!pq.empty()){
		ii top = pq.top();
		pq.pop();
		int node = top.se;
		int d = top.fi;
		for(int i=0;i<v[node].size();++i){
			ii neighbor = v[node][i];
			if(distance[neighbor.fi]>d+neighbor.se){
				distance[neighbor.fi]=d+neighbor.se;
				pq.push(ii(distance[neighbor.fi],neighbor.fi));
			}
		}
	}
}

int main(){
	int cases;
	scanf("%d",&cases);
	while(cases--){
		dists = vi(10002,INF);
		distt = vi(10002, INF);
		scanf("%d %d %d %d %d",&n,&m,&k,&s,&t);
		dist = vector<vii> (n+1,vector<ii>());
		rdist = vector<vii> (n+1,vector<ii>());
		int u,v,d;
		for(int i=0;i<m;++i){
			scanf("%d %d %d",&u,&v,&d);
			dist[u].pb(ii(v,d));
			rdist[v].pb(ii(u,d));
		}
		dijkstras(s,dist,dists);
		dijkstras(t,rdist,distt);
		int ans = dists[t];
		for(int i=0;i<k;++i){
			scanf("%d %d %d",&u,&v,&d);
			ans=min(ans,min(dists[u]+d+distt[v],dists[v]+d+distt[u]));
		}
		if(ans==INF)
			ans=-1;
		printf("%d\n",ans);
	}
	return 0;
}

