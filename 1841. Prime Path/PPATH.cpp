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
#include <utility>

using namespace std;

struct node{
	int val;
	int count;
	node(int x,int y):val(x),count(y){};
};

bool isPrime[10000];
bool isVisited[10000];
queue<node> q;

void prime(){
	isPrime[0]=false;
	isPrime[1]=false;
	for(int i=2;i<=(int)sqrt(9999);i++){
		if(isPrime[i]){
			for(int j=i*i;j<=9999;j+=i){
				isPrime[j]=false;
			}
		}
	}
}

int getcombinations(int start,int end,int count){
	isVisited[start]=true;
	stringstream ss;
	ss<<start;
	string s,t;
	s=ss.str();
	for(int i=0;i<4;i++){
		t=s;
		for(char j='0';j<='9';j++){
			if(i==0&&j=='0')continue;
			t[i]=j;
			stringstream ss1(t);
			int st;
			ss1>>st;
			if(st==end){
				return count;
			}
			if(isPrime[st]&&(isVisited[st]==false)){
				isVisited[st]=true;
				q.push(node(st,count));
			}
		}
	}
	return -1;
}

int getpath(int start,int end){
	int count=0;
	q.push(node(start,count));
	while(!q.empty()){
		node temp=q.front();
		q.pop();
		int result=getcombinations(temp.val,end,(temp.count)+1);
		if(result!=-1){
			return result;
		}
	}
	return -1;
}

int main(){
	memset(isPrime,true,sizeof(isPrime));
	prime();
	int t;
	scanf("%d",&t);
	while(t--){
		q=queue<node>();
		memset(isVisited,false,sizeof(isVisited));
		int start,end;
		scanf("%d%d",&start,&end);
		if(start==end){
			printf("0\n");
			continue;
		}
		int finalresult=getpath(start,end);
		if(finalresult!=-1){
			printf("%d\n",finalresult);
		}
		else{
			printf("Impossible\n");
		}
	}
}
