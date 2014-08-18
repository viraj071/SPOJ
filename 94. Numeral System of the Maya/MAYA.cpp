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
	map <int ,long> m;
	m[0]=1;
	m[1]=20;
	m[2]=360;
	m[3]=360*20;
	m[4]=7200*20;
	m[5]=144000*20;
	m[6]=144000*20*20;
	while(true){
		int digits;
		scanf("%d",&digits);
		if (digits==0)break;
		long ans=0;
		scanf("\n");
		//int temp=digits;
		for(int i=1;i<=digits;i++){
			int temp=0;
			char c;
			c=getchar();
			while(c!='\n'){
				if(c=='S')
					temp=0;
				if(c=='.')temp++;
				if(c=='-')temp+=5;
				c=getchar();
			}
			//cout<<temp;
			ans+=m[digits-i]*temp;
		}
		printf("%ld\n\n",ans);
	}
	return 0;
}
