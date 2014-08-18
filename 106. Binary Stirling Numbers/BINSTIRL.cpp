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
		int n,m;
		scanf("%d%d",&n,&m);
		printf("%d\n",((n-m)&((m-1)/2))==0);
		/*long s[n+1][m+1];
		memset(s,0,sizeof(s[0][0])*(n+1)*(m+1));
		s[0][0]=1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				s[i][j]=j*s[i-1][j]+s[i-1][j-1];
			}
		}
		cout<<"  ";
		for(int j=0;j<=m;j++){
			cout<<j<<" ";
		}
		cout<<endl;
		for(int i=0;i<=n;i++){
			cout<<i<<" ";
			for(int j=0;j<=m;j++){
				cout<<s[i][j]%2<<" ";
			}
			cout<<endl;
		}*/
	}
	return 0;
}
