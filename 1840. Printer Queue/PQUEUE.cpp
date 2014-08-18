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
		int count1=0;
		int n,m;
		scanf("%d%d",&n,&m);
		vector<int> values;
		for(int i=0;i<n;i++){
			int temp;
			scanf("%d",&temp);
			values.push_back(temp);
		}
		while(true){
			int maxpos=max_element(values.begin(),values.end())-values.begin();
			//cout<<maxpos<<" "<<m<<endl;
			if(m==maxpos)break;
			int temp1=maxpos;
			while(temp1--){
				values.push_back(values[0]);
				values.erase(values.begin()+0);
			}
			if(m<maxpos){
				m=values.size()-1-maxpos+m;
			}
			else{
				m=(m-maxpos)-1;
			}
			values.erase(values.begin()+0);
			count1++;
		}
		printf("%d\n",(count1+1));
	}
	return 0;
}
