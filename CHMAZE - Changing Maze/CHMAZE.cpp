/*
 * CHMAZE.cpp
 *
 *  Created on: May 5, 2015
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
typedef pair<pair<int,int>,int> ii_i;
typedef vector<vector<vector<int> > > vvvi;
typedef vector<int> vi;

int r,c,t;
vvvi cycles;
vvvi dist;
int ans;

int dx[] = {0,1,-1,0,0};
int dy[] = {0,0,0,1,-1};

void bfs(){
	queue<ii_i> q;
	q.push(ii_i(ii(0,0),0));
	if(r-1==0&&c-1==0){
		ans=0;
		return ;
	}
	cycles[0][0][0]=1;
	while(!q.empty()){
		ii_i top = q.front();
		q.pop();
		int tempx = top.first.first;
		int tempy = top.first.second;
		int current_cycle = top.second;
		for(int i=0;i<5;++i){
			int cx = tempx + dx[i];
			int cy = tempy + dy[i];
			int next_cycle = (current_cycle+1)%t;
			if(cx<0||cx>=r||cy<0||cy>=c){
				continue;
			}
			if(cycles[next_cycle][cx][cy]==0){
				cycles[next_cycle][cx][cy]=1;
				dist[next_cycle][cx][cy]=dist[current_cycle][tempx][tempy]+1;
				if(cx==r-1&&cy==c-1){
					ans =dist[next_cycle][cx][cy];
					return ;
				}
				q.push(ii_i(ii(cx,cy),next_cycle));
			}
		}
	}
	return ;
}

int main(){
	int icase=0;
	while(true){
		scanf("%d %d %d",&r,&c,&t);
		if(r==0&&c==0&&t==0)
			break;
		ans = -1;
		cycles = vvvi(t,vector<vector<int> >(r,vector<int> (c,0)));
		dist = vvvi(t,vector<vector<int> >(r,vector<int> (c,0)));
		for(int i=0;i<t;++i){
			for(int j=0;j<r;++j){
				string s;
				cin>>s;
				for(int k=0;k<c;++k){
					cycles[i][j][k]=s[k]-'0';
				}
			}
		}
		bfs();
		if(ans==-1){
			printf("Case %d: Luke and Leia cannot escape.\n",++icase);
		}
		else
			printf("Case %d: Luke and Leia can escape in %d steps.\n",++icase,ans);
	}
	return 0;
}

