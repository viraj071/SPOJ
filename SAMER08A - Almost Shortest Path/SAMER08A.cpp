/*
 * SAMER08A.cpp
 *
 *  Created on: Apr 25, 2015
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

int n,m,s,d;

vector<vii> neighbors;
vi parents;
vi vals;
vii edgesToAvoid;

void storeEdges(int node,int parent){
	//cout<<node<<" "<<parent<<endl;
	while(parent!=-1){
		edgesToAvoid.push_back(ii(parent,node));
		node=parent;
		parent=parents[parent];
	}
}


void dijkstras(){
	//cout<<"1"<<endl;
	priority_queue<ii,vii,greater<ii> > pq;
	vals[s]=0;
	pq.push(ii(s,0));
	while(!pq.empty()){
		ii top = pq.top();
		pq.pop();
		for(int j=0;j<neighbors[top.first].size();++j){
			ii x = neighbors[top.first][j];
			//cout<<top.first<<" "<<x.first<<endl;
			if(x.first==d){
				if(vals[x.first]==vals[top.first]+x.second){
					storeEdges(d,top.first);
					continue;
				}
			}
			if(vals[x.first]>vals[top.first]+x.second){
				vals[x.first]=vals[top.first]+x.second;
				parents[x.first]=top.first;
				pq.push(ii(x.first,vals[x.first]));
				if(x.first==d){
					edgesToAvoid.clear();
					storeEdges(d,top.first);
				}
			}
		}
	}
}


void dijkstras2(){
	//cout<<"2"<<endl;
	priority_queue<ii,vii,greater<ii> > pq;
	vals[s]=0;
	pq.push(ii(s,0));
	while(!pq.empty()){
		ii top = pq.top();
		pq.pop();
		for(int j=0;j<neighbors[top.first].size();++j){
			ii x = neighbors[top.first][j];
			if(find(edgesToAvoid.begin(),edgesToAvoid.end(),ii(top.first,x.first))==edgesToAvoid.end()){
				if(vals[x.first]>vals[top.first]+x.second){
					vals[x.first]=vals[top.first]+x.second;
					pq.push(ii(x.first,vals[x.first]));
				}
			}
		}
	}
}

void print(){
	for(int j=0;j<edgesToAvoid.size();++j){
		cout<<edgesToAvoid[j].first<<" "<<edgesToAvoid[j].second<<endl;
	}
}

int main(){
	while(true){
		scanf("%d %d",&n,&m);
		if(m==0&&n==0)break;
		vals = vi (n,INF);
		parents = vi (n,-1);
		neighbors = vector<vii> (n,vii());
		scanf("%d %d",&s,&d);
		while(m--){
			int u,v,p;
			scanf("%d %d %d",&u,&v,&p);
			neighbors[u].push_back(ii(v,p));
		}
		dijkstras();
		if(vals[d]==INF){
			printf("-1\n");
			continue;
		}
		vals = vi (n,INF);
		parents = vi (n,-1);
		//cout<<endl<<endl;
		//print();
		dijkstras2();
		if(vals[d]==INF){
			printf("-1\n");
		}
		else{
			cout<<vals[d]<<"\n";
		}
	}
	return 0;
}






