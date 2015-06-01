/*
 * ABCPATH.cpp
 *
 *  Created on: May 29, 2015
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

int m,n;
int ans=-INF;
vector<vector<char> > grid;
vector<vector<bool> > visited;

int dx[]={1,-1,0,0,1,-1,1,-1};
int dy[]={0,0,-1,1,1,-1,-1,1};

void clear(){
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			visited[i][j]=false;
		}
	}
}
void dfsUtil(int,int);

void dfs(){
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			if(grid[i][j]=='A'){
				dfsUtil(i,j);
				clear();
			}
		}
	}
}

void dfsUtil(int i,int j){
	stack<pair<ii,int> > st;
	visited[i][j]=true;
	st.push(pair<ii,int>(ii(i,j),1));
	while(!st.empty()){
		pair<ii,int> top = st.top();
		st.pop();
		for(int k=0;k<8;++k){
			int cx=top.first.first+dx[k];
			int cy=top.first.second+dy[k];
			if(cx<0||cx>=m||cy<0||cy>=n||visited[cx][cy]||(int)grid[cx][cy]!=(int)grid[top.first.first][top.first.second]+1){
				continue;
			}
			visited[cx][cy]=true;
			st.push(pair<ii,int>(ii(cx,cy),top.second+1));
		}
		ans=max(ans,top.second);
	}
}

int main(){
	int icase=1;
	while(true){
		scanf("%d %d",&m,&n);
		if(m==0&&n==0)break;
		grid = vector<vector<char> > (m,vector<char>(n,'.'));
		visited = vector<vector<bool> > (m,vector<bool>(n,false));
		for(int i=0;i<m;++i){
			string s;
			cin>>s;
			for(int j=0;j<n;++j){
				grid[i][j]=s[j];
			}
		}
		ans=-INF;
		dfs();
		if(ans==-INF)ans=0;
		printf("Case %d: %d\n",icase,ans);
		icase++;
	}
	return 0;
}

