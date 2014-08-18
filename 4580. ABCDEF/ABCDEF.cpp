#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <list>

using namespace std;

int n[101];
int A[1000000];
int B[1000000];
int P[1000000][2];
int Q[1000000][2];

int main(){
	int t;
	scanf("%d",&t);
	int temp=t;
	while(t--){
		scanf("%d",&n[t]);
	}
	int t1=0;
	for(int i=0;i<temp;i++){
		for(int j=0;j<temp;j++){
			for(int k=0;k<temp;k++){
				A[t1++]=n[i]*n[j]+n[k];
			}
		}
	}
	int t2=0;
	for(int i=0;i<temp;i++){
		for(int j=0;j<temp;j++){
			for(int k=0;k<temp;k++){
				if(n[i]==0)continue;
				B[t2++]=n[i]*(n[j]+n[k]);
			}
		}
	}
	sort(A,A+t1);
	sort(B,B+t2);
	
	P[0][0]=A[0];
	P[0][1]=1;
	int t3=0;
	for(int i=1;i<t1;i++){
		if(A[i]==A[i-1]){
			P[t3][1]++;
		}
		else{
			t3++;
			P[t3][0]=A[i];
			P[t3][1]=1;
		}
	}
	Q[0][0]=B[0];
	Q[0][1]=1;
	int t4=0;
	for(int i=1;i<t2;i++){
		if(B[i]==B[i-1]){
			Q[t4][1]++;
		}
		else{
			t4++;
			Q[t4][0]=B[i];
			Q[t4][1]=1;
		}
	}
	int count=0;
	for(int i=0;i<=t3;i++){
		int no=P[i][0];
		int low=0;
		int high=t4;
		int mid;
		while(low<=high){
			mid=(low+high)/2;
			if(Q[mid][0]==no){
				count+=P[i][1]*Q[mid][1];
				break;
			}
			else if(Q[mid][0]<no){
				low=mid+1;
			}
			else if(Q[mid][0]>no){
				high=mid-1;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}
