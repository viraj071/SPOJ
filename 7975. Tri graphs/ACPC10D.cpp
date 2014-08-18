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

int main(){
	int count=0;
	while(true){
		int n;
		scanf("%d",&n);
		if(n==0)
			break;
		count++;
		int a[n][3];
		for(int i=0;i<n;i++)
		{
			scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
		}
		a[0][2]=a[0][2]+a[0][1];
		a[1][0]+=a[0][1];
		for(int i=1;i<n;i++){
			if(i==1){
				a[i][1]+=min(a[i-1][1],min(a[i-1][2],a[i][0]));
				a[i][2]+=min(a[i-1][1],min(a[i-1][2],a[i][1]));
				continue;
			}
			if(i==(n-1))
			{
				a[i][0]+=min(a[i-1][0],a[i-1][1]);
				a[i][1]+=min(a[i-1][0],min(a[i-1][1],min(a[i-1][2],a[i][0])));
				continue;
			}
				a[i][0]+=min(a[i-1][0],a[i-1][1]);
				a[i][1]+=min(a[i-1][0],min(a[i-1][1],min(a[i-1][2],a[i][0])));
				a[i][2]+=min(a[i-1][1],min(a[i-1][2],a[i][1]));
		}
		printf("%d. %d\n",count,a[n-1][1]);
	}
	return 0;
}
