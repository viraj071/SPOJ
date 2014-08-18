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

char input[5001]="";
unsigned long long DP[5001];

int main(){
	scanf("%s",input);
	while(strcmp(input,"0")){
		int len=strlen(input),index=1;
		memset(DP,0,sizeof(DP));
		DP[0]=1;
		while(index<len){
			int temp=0;
			temp=(input[index-1]-'0')*10;
			temp+=(input[index]-'0');
			if(input[index]-'0'){
				DP[index]=DP[index-1];
			}
			if(temp<=26&&temp>9){
				DP[index]+=DP[index-2<0?0:index-2];
			}
			index++;
		}
		printf("%llu\n",DP[len-1]);
		scanf("%s",input);
	}
	return 0;
}
