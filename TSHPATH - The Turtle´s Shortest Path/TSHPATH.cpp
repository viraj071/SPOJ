/*
 * SHPATH.cpp
 *
 *  Created on: Apr 28, 2015
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
#define INF (1<<25)

map<string,int> city;
vector<vii> neighbors;
vector<int> vals;
int n;

typedef bool (*comp)(ii,ii);

bool compare(ii a,ii b){
	return a.second>b.second;
}

void dijkstras(int source,int destination){
	priority_queue<ii,vii,comp> pq(compare);
	pq.push(ii(source,0));
	vals[source]=0;
	while(!pq.empty()){
		ii x = pq.top();
		int top=x.first;
		pq.pop();
		if(top==destination)break;
		if(vals[top]<x.second){
			continue;
		}
		for(int i=0;i<neighbors[top].size();++i){
			ii neighbor = neighbors[top][i];
			int in = neighbor.first, cost = neighbor.second;
			if(vals[in]>vals[top]+cost){
				vals[in]=vals[top]+cost;
				pq.push(ii(in,vals[in]));
			}
		}
	}
}


int main(){
	int s;
	scanf("%d",&s);
	city.clear();
	while(s--){
		scanf("%d",&n);
		neighbors = vector<vii> (n,vii());
		for(int i=0;i<n;++i){
			char name[11];
			scanf("%s",name);
			city[string(name)]=i;
			int inn;
			scanf("%d",&inn);
			while(inn--){
				int nr,cost;
				scanf("%d%d",&nr,&cost);
				neighbors[i].push_back(ii(nr-1,cost));
			}
		}
		int r;
		scanf("%d",&r);
		while(r--){
			char source[11],destination[11];
			scanf("%s %s",source,destination);
			vals = vi(n,INF);
			string start = string(source);
			string end = string(destination);
			dijkstras(city[start],city[end]);
			printf("%d\n",vals[city[end]]);
		}
	}
	return 0;
}


