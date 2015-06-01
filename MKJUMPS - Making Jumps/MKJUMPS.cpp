/*
 * MKJUMPS.cpp
 *
 *  Created on: May 4, 2015
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

vector<vector<char> > board;
int n;

int dx[8]={2,-2,2,-2,1,-1,1,-1};
int dy[8]={1,1,-1,-1,2,2,-2,-2};

void backtrack(int starti,int startj, int tempcount , int &ans){
	ans=max(ans,tempcount);
	int tempx=starti,tempy=startj;
	for(int i=0;i<8;++i){
		int cx = tempx+dx[i];
		int cy = tempy+dy[i];
		if(cx>=0 && cx<10 && cy>=0 && cy<10 && board[cx][cy]=='I'){
			board[cx][cy]='V';
			backtrack(cx,cy,tempcount+1,ans);
			board[cx][cy]='I';
		}
	}
}

int main(){
	int c=0;
	while(true){
		c++;
		int total=0;
		scanf("%d",&n);
		if(n==0){
			break;
		}
		board = vector<vector<char> > (10,vector<char> (10,'O'));
		int startj;
		for(int i=0;i<n;++i){
			int offset,val;
			scanf("%d %d",&offset,&val);
			total+=val;
			if(i==0){
				startj=offset;
			}
			for(int j=0;j<val;++j){
				board[i][offset+j]='I';
			}
		}
		int ans=0;
		board[0][startj]='V';
		backtrack(0,startj,1,ans);
		if((total-ans)==1){
			printf("Case %d, %d square can not be reached.\n",c,total-ans);
		}
		else{
			printf("Case %d, %d squares can not be reached.\n",c,total-ans);
		}
	}
	return 0;
}
