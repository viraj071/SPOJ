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
	int t;
	scanf("%d",&t);
	while(t--){
		bool possible=true;
		int n;
		scanf("%d",&n);
		vector<string> phone(n);
		while(n--){
			string s;
			cin>>s;
			phone[n]=s;
		}
		sort(phone.begin(),phone.end());
		for(int i=0;i+1<phone.size();i++){
			if(phone[i].length()!=phone[i+1].length()){
				if(phone[i+1].substr(0,phone[i].length())==phone[i]){
					possible=false;
					break;
				}
			}
		}
		if(possible){
			printf("YES\n");
		}
		else
			printf("NO\n");
	}
	return 0;
}
