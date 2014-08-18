#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>

using namespace std;

int main(){
	int d[1][10];
	int a[10];
	memset(d,0,sizeof(d));
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	d[0][0]=a[0];
	int ans=d[0][0];
	int minmod=abs(100-d[0][0]);
	for(int i=0;i<1;i++){
		for(int j=i+1;j<10;j++){
			d[i][j]=d[i][j-1]+a[j];
			if(abs(100-d[i][j])<minmod){
				minmod=abs(100-d[i][j]);
				ans=d[i][j];
			}
			if(abs(100-d[i][j])==minmod&&d[i][j]>ans){
				minmod=abs(100-d[i][j]);
				ans=d[i][j];
			}
		}
	}
	/*for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout<<d[i][j]<<" ";
		}
		cout<<endl;
	}*/
	printf("%d\n",ans);
	return 0;
}
