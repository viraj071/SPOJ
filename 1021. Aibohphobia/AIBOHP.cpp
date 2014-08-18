#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>

using namespace std;
string s;
static unsigned short table[6101][6101];
int main(){
	int t=0;
	scanf("%d",&t);
	while(t--){
		cin>>s;
		memset(table,0,sizeof table);
		for(int gap=1;gap<s.length();gap++){
			for(int l=0,h=gap;h<s.length();l++,h++){
				table[l][h]=(s[l]==s[h])? table[l+1][h-1]:(min(table[l][h-1],table[l+1][h])+1);				
			}
		}
		printf("%d\n",table[0][s.length()-1]);
	}
	return 0;
}
