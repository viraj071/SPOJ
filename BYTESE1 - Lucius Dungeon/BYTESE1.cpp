/*
 * BYTESE1.cpp
 *
 *  Created on: Apr 26, 2015
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

int m,n,a,b,t;
vector<vi> grid (101,vi(101,0));
vector<vi> vals (101,vi(101,INF));
vector<vi> visited (101,vi(101,0));

typedef bool (*comp)(ii,ii);

bool compare(ii a,ii b){
	return vals[a.first][a.second] > vals[b.first][b.second];
}

int dx[4]={1,-1,0,0};
int dy[4]={0,0,-1,1};

void dijkstras(){
	priority_queue<ii,vii,comp> pq(compare);
	vals[0][0]=grid[0][0];
	pq.push(ii(0,0));
	visited[0][0]=1;
	while(!pq.empty()){
		ii x = pq.top();
		pq.pop();
		int tempx=x.first,tempy=x.second;
		if(tempx==a&&tempy==b){
			return;
		}
		for(int i=0;i<4;++i){
			int cx = dx[i] + tempx;
			int cy = dy[i] + tempy;
			if(cx<0||cx>=m||cy<0||cy>=n||visited[cx][cy]==1||vals[cx][cy]<grid[cx][cy]+vals[tempx][tempy]){
				continue;
			}
			vals[cx][cy]=grid[cx][cy]+vals[tempx][tempy];
			visited[cx][cy]=1;
			pq.push(ii(cx,cy));
		}
	}
}

int main(){
	int k;
	scanf("%d",&k);
	while(k--){
		scanf("%d %d",&m,&n);
		for(int i=0;i<m;++i){
			for(int j=0;j<n;++j){
				scanf("%d",&grid[i][j]);
				vals[i][j]=INF;
				visited[i][j]=0;
			}
		}
		scanf("%d %d %d",&a,&b,&t);
		dijkstras();
		if(vals[a-1][b-1]<=t){
			printf("YES\n");
			printf("%d\n",t-vals[a-1][b-1]);
		}
		else
			printf("NO\n");
	}
	return 0;
}


