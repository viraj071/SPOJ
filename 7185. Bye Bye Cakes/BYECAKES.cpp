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
	while(true){
		int a[8];
		int quantity=-1;
		for(int i=0;i<8;i++){
			scanf("%d",&a[i]);
		}
		if(a[0]==-1)
			break;
		for(int i=0;i<4;i++){
			quantity=max(double(quantity),ceil(double(a[i])/double(a[i+4])));
		}
		for(int i=0;i<4;i++){
			int temp;
			temp=quantity*a[i+4]-a[i];
			printf("%d",temp);
			if(i<3)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
