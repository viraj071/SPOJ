#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>

using namespace std;

struct edge{
	int src;
	int dest;
	int weight;
};

struct subset{
	int parent;
	int rank;
};

unsigned long long total=0;
vector<edge*> e;
vector<subset*> subsets;
int n;
map<pair<int,int>, bool> visited;

int find(int i){
	if(subsets[i]->parent!=i){
		subsets[i]->parent=find(subsets[i]->parent);
	}
	return subsets[i]->parent;
}

void Union(int x, int y){
	int xroot = find(x);
	int yroot = find(y);
	if(subsets[xroot]->rank < subsets[yroot]->rank){
		subsets[xroot]->parent=yroot;
	}
	else if (subsets[xroot]->rank > subsets[yroot]->rank){
		subsets[yroot]->parent=xroot;
	}
	else{
		subsets[xroot]->parent=yroot;
		subsets[yroot]->rank++;
	}
}

bool mycomp(const edge* a,const edge*b){
	return a->weight < b->weight;
}

void kruskalmst(){
	sort(e.begin(),e.end(),mycomp);
	for(int i=0;i<n;++i){
		subset *temp=new subset();
		temp->parent=i;
		temp->rank=0;
		subsets.push_back(temp);
	}
	for(int i=0;i<e.size();++i){
		edge *nextedge=e[i];
		int x=find(nextedge->src);
		int y=find(nextedge->dest);
		if(x!=y){
			total+=nextedge->weight;
			Union(x,y);
		}
	}
}

int main(){
	int s;
	scanf("%d",&s);
	while(s--){
		total=0;
		visited.clear();
		e.clear();
		subsets.clear();
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			string temp;
			cin>>temp;
			int neigh;
			scanf("%d",&neigh);
			while(neigh--){
				int b,c;
				scanf("%d%d",&b,&c);
				if(i<b-1){
					edge *x=new edge();
					x->src=i;
					x->dest=b-1;
					x->weight=c;
					e.push_back(x);
					visited[make_pair(i,b-1)]=true;
				}
			}
		}
		kruskalmst();
		printf("%llu\n",total);
	}
	return 0;
}
