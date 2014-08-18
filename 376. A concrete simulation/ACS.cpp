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
	int r[1235];
    int c[5679];
	for (int i=1; i<=1234; i++) {
		r[i]=i;
	}
	for (int j=1; j<=5678; j++) {
		c[j]=j;
	}
	char s;
	int temp;
	while(cin>>s){
		if(s=='R'){
			int v1,v2;
			scanf("%d%d",&v1,&v2);
			temp=r[v2];
			r[v2]=r[v1];
			r[v1]=temp;
			continue;
		}
		if(s=='C'){
			int v1,v2;
			scanf("%d%d",&v1,&v2);
			temp=c[v2];
			c[v2]=c[v1];
			c[v1]=temp;
			continue;
		}
		if(s=='Q'){
			int v1,v2;
			scanf("%d%d",&v1,&v2);
			long value=((r[v1]-1)*5678)+(c[v2]-1)+1;
			printf("%ld\n",value);
			continue;
		}
		if(s=='W'){
			int v1;
			scanf("%d",&v1);
			int row=((v1-1)/5678)+1;
			int	col=((v1-1)%5678)+1;
			for (int i=1; i<=1234; i++) {
				if(r[i]==row){
					printf("%d ",i);
					break;
				}
			}
			for (int j=1; j<=5678; j++) {
				if(c[j]==col){
					printf("%d\n",j);
					break;
				}
			}
			continue;
		}
	}
	return 0;
}
