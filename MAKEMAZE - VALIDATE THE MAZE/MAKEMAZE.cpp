/*
 * MAKEMAZE.cpp
 *
 *  Created on: Jun 6, 2015
 *      Author: viraj
 */
#include <iostream>
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

vector<string> grid;
vector<string> visited;

int dx[] = {-1,1,0,0};
int dy[] = {0,0,1,-1};

int m,n,count,ecount;

void dfsUtil(int starti,int startj){
	stack<ii> st;
	st.push(ii(starti,startj));
	visited[starti][startj]='T';
	while(!st.empty()){
		ii top = st.top();
		st.pop();
		for(int i=0;i<4;++i){
			int cx = top.fi+dx[i];
			int cy = top.se+dy[i];
			if(cx<0||cx>m-1||cy<0||cy>n-1||grid[cx][cy]=='#'||visited[cx][cy]=='T')
				continue;
			if(cx==0||cy==0||cx==m-1||cy==n-1){
				count++;
			}
			st.push(ii(cx,cy));
			visited[cx][cy]='T';
		}
	}
}

void dfs(){
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			if(grid[i][j]=='.'&&(i==0||j==0||i==(m-1)||j==(n-1))){
				ecount++;
				dfsUtil(i,j);
				if(count>1){
					return ;
				}
				// reset visited if no path found
				else if(count==0){
					visited = vector<string> (m,string(n,'F'));
				}
			}
		}
	}
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		count=0;
		//count the number of openings on the edges
		ecount=0;
		scanf("%d %d",&m,&n);
		grid = vector<string> (m,string());
		visited = vector<string> (m,string(n,'F'));
		string input;
		for(int i=0;i<m;++i){
			cin>>input;
			grid[i]=input;
		}
		dfs();
		if(count>1||count==0||ecount>2){
			printf("invalid\n");
		}
		else{
			printf("valid\n");
		}
	}
	return 0;
}


