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
	int t=0;
	scanf("%d",&t);
	while(t--){
		map<string,int> toss;
		toss["TTT"]=0;
		toss["TTH"]=0;
		toss["THT"]=0;
		toss["THH"]=0;
		toss["HTT"]=0;
		toss["HTH"]=0;
		toss["HHT"]=0;
		toss["HHH"]=0;
		int temp;
		scanf("%d",&temp);
		string s;
		cin>>s;
		for(int i=0;i+3<=40;i++){
			toss[s.substr(i,3)]++;
		}
		map<string, int>::reverse_iterator i;
		printf("%d ",temp);
		for(i=toss.rbegin();i!=toss.rend();i++){
			printf("%d",i->second);
			if((i->first)!="HHH")
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
