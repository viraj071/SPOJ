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

int a[4001],b[4001],c[4001],d[4001];
int A[16000002];
int B[16000002];

int main(){
	int n;
	long long sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
	}
	long t1=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			A[t1++]=a[i]+b[j];
		}
	}
	t1=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			B[t1++]=-c[i]-d[j];
		}
	}
	sort(A,A+t1);
	sort(B,B+t1);
	
	for(long i=0;i<t1;){
		long size1=0;
		int no=A[i];
		while(A[i]==no&&i<t1){
			size1++;
			i++;
		}
		long low=0;
		long high=t1;
		long mid;
		long temp=0;
		long size=0;
		while(low<=high){
			mid=(low+high)/2;
			if(B[mid]==no){
				temp=mid-1;
				while(mid<t1&&B[mid]==no){
					size++;
					mid++;
				}
				while(temp>=0&&B[temp]==no){
					size++;
					temp--;
				}
				break;
			}
			else if(B[mid]<no){
				low=mid+1;
			}
			else if(B[mid]>no){
				high=mid-1;
			}
		}
		sum+=size1*size;
	}
	printf("%lld\n",sum);
	return 0;
}
