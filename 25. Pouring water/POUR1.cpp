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

int gcd(int a,int b){
	if(b==0)return a;
	return gcd(b,a%b);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if(c>max(a,b)||c%gcd(a,b)!=0){
			printf("-1\n");
			continue;
		}
		int acount=0,bcount=0;
		int tempa=0,tempb=0;
		while(true){
			//cout<<tempa<<" "<<tempb<<endl;
			if(tempa==c||tempb==c)break;
			if(tempa==0){
				tempa=a;
				acount++;
				continue;
			}
			if(tempb!=b){
				int val=min(tempa,b-tempb);
				tempb+=val;
				tempa-=val;
				acount++;
				continue;
			}
			if(tempb==b){
				tempb=0;
				acount++;
				continue;
			}
		}
		tempa=0;tempb=0;
		while(true){
			//cout<<tempa<<" "<<tempb<<endl;
			if(tempa==c||tempb==c)break;
			if(tempb==0){
				tempb=b;
				bcount++;
				continue;
			}
			if(tempa!=a){
				int val=min(tempb,a-tempa);
				tempa+=val;
				tempb-=val;
				bcount++;
				continue;
			}
			if(tempa==a){
				tempa=0;
				bcount++;
				continue;
			}
		}
		printf("%d\n",min(acount,bcount));
	}
	return 0;
}
