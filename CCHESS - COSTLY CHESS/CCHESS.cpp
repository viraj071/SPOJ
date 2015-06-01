/*
 * CCHESS.cpp
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
#define INF 1000000000

int dx[]={2,2,-2,-2,1,-1,-1,1};
int dy[]={1,-1,-1,1,2,2,-2,-2};

int starti,startj,endi,endj;
int mincost=INF;

typedef bool (*comp)(pair<ii,int>,pair<ii,int>);

bool compare(pair<ii,int> a,pair<ii,int> b){
	return a.second>b.second;
}

int vis[8][8];


int dijkstras(){
	memset(vis,0,sizeof vis);
	priority_queue<pair<ii,int>,vector<pair<ii,int> >,comp> pq(compare);
	pq.push(pair<ii,int>(ii(starti,startj),0));
	while(!pq.empty()){
		pair<ii,int> top = pq.top();
		pq.pop();
		if(vis[top.first.first][top.first.second])
			continue;
		if(top.first.first==endi&&top.first.second==endj)
			return top.second;
		vis[top.first.first][top.first.second]=1;
		for(int i=0;i<8;++i){
			int cx=top.first.first+dx[i];
			int cy=top.first.second+dy[i];
			if(cx<0||cx>=8||cy<0||cy>=8||vis[cx][cy]){
				continue;
			}
			int temp = (top.first.first*cx)+(top.first.second*cy)+top.second;

			pq.push(pair<ii,int>(ii(cx,cy),temp));
		}
	}
	return -1;
}


int main(){
	while(scanf("%d %d %d %d", &starti,&startj,&endi,&endj)>0){
		printf("%d\n",dijkstras());
	}
	return 0;
}
