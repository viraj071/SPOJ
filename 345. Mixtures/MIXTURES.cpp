#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <stack>
using namespace std;

int mincolor[100][100];
long minsmoke[100][100];
int p[100];

int calculate(int i,int j){
	if(i==j){
		return 0;
	}
	if(j==i+1){
		return p[i]*p[j];
	}
	long &ret=minsmoke[i][j];
	long temp;
	if(ret==-1){
		for(int k=i;k+1<=j;k++){
			temp=calculate(i,k)+calculate(k+1,j)+(mincolor[i][k]*mincolor[k+1][j]);
			if(ret==-1||temp<ret){
				ret=temp;
			}
		}
	}
	return ret;
}

int main(){
		int t;
		while(scanf("%d",&t)==1){
		memset(minsmoke,-1,sizeof(minsmoke));
		for(int i=0;i<t;i++){
			scanf("%d",&p[i]);
			mincolor[i][i]=p[i];
		}
		for(int i=0;i<t;i++){
			for(int j=i+1;j<t;j++){
				mincolor[i][j]=(mincolor[i][j-1]+p[j])%100;
			}
		}
		printf("%d\n",calculate(0,t-1));
		}
	return 0;
}
