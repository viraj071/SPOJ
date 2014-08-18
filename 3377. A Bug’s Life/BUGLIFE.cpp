#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <list>
#include <queue>

using namespace std;

int currentcolor;
int color[2000];
bool visited[2000];
bool suspicious;
queue<int> q;
list<int> *adj;

bool bfs(){
	while(!q.empty()){
		int temp;
		temp=q.front();
		q.pop();
		//cout<<temp<<endl;
		visited[temp]=true;
		currentcolor=abs(color[temp]-1);
		list<int>::iterator i;
		for(i=adj[temp].begin();i!=adj[temp].end();i++){
			if(visited[*i]==true){
				if(color[*i]==color[temp])
					return true;
			}
			else{
				color[*i]=currentcolor;
				q.push(*i);
			}
		}
	}
	return false;
}


int main(){
	int t=0;
	scanf("%d",&t);
	for(int j=1;j<=t;j++){
		memset(color,-1,sizeof(color));
		memset(visited,false,sizeof(visited));
		suspicious=true;
		int g,n;
		scanf("%d%d",&g,&n);
		adj=new list<int>[g];
		for(int i=0;i<n;i++){
			int v,w;
			scanf("%d%d",&v,&w);
			adj[v-1].push_back(w-1);
			adj[w-1].push_back(v-1);
		}
		printf("Scenario #%d:\n",j);
		for(int i=0;i<g;i++){
			currentcolor=1;
			if(visited[i]==false){
				suspicious=true;
				color[i]=currentcolor;
				q=queue<int>();
				q.push(i);
				suspicious=bfs();
				if(suspicious==true){
					break;
				}
			}
		}
		if(suspicious)
			printf("Suspicious bugs found!\n");
		else
			printf("No suspicious bugs found!\n");
	}
	return 0;
}
