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
		int s,c;
		scanf("%d%d",&s,&c);
		vector<vector<int> > values;
		vector<int> x(s+c);
		bool stop=true;
		for(int i=0;i<s;i++){
			scanf("%d",&x[i]);
			if(i>0&&x[i]!=x[i-1]){
				stop=false;
			}
		}
		values.push_back(x);
		int i=0;
		while(stop==false){
			bool possible=true;
			vector<int> temp(s+c-(i+1));
			for(int j=0;j<s-(i+1);j++){
				temp[j]=(values[i][j+1]-values[i][j]);
				if(j>0&&temp[j]!=temp[j-1]){
					possible=false;
				}
			}
			values.push_back(temp);
			stop=possible;
			if(stop==false)i++;
		}
		if(values.size()>1){
			int start=s-(i+1);
			for(int z=0;z<c;z++){
				values[i+1][start]=values[i+1][start-1];
				start++;
			}
			for(int k=i;k>=0;k--){
				int start=s-k;
				for(int m=0;m<c;m++){
					values[k][start]=values[k][start-1]+values[k+1][start-1];
					start++;
				}
			}
		}
		else{
			for(int k=s;k<s+c;k++)
				values[0][k]=values[0][k-1];
		}
		for(int k=s;k<s+c;k++){
			printf("%d",values[0][k]);
			if(k<s+c-1)printf(" ");
		}
		printf("\n");
	}
	return 0;
}
