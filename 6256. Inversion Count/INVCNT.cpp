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

unsigned long a[200000];
long long int c=0;
unsigned long b[200000];
void merge(long low,long mid,long high){
	long h,j,i,k;
	h=low;
	i=low;
	j=mid+1;
	while((h<=mid)&&(j<=high)){
		if(a[h]<=a[j]){
			b[i]=a[h];
			h++;
		}
		else{
			c+=(mid+1-h);
			b[i]=a[j];
			j++;
		}
		i++;
	}
	if(h>mid){
		for(k=j;k<=high;k++)
		{
			b[i]=a[k];
			i++;
		}
	}
	else{
		for(k=h;k<=mid;k++)
		{
			b[i]=a[k];
			i++;
		}
	}
	for(k=low;k<=high;k++) a[k]=b[k];
}


void mergesort(long low,long high){
	long mid;
	if(low<high){
		mid=(low+high)/2;
		mergesort(low,mid);
		mergesort(mid+1,high);
		merge(low,mid,high);
	}
}



int main(){
	int t;
	scanf("%d",&t);
	printf("\n");
	while(t--){
		c=0;
		long n;
		scanf("%ld",&n);		
		for(int i=0;i<n;i++){
			scanf("%lu",&a[i]);
		}
		printf("\n");
		mergesort(0,n-1);
		printf("%lld\n",c);
	}
	return 0;
}
