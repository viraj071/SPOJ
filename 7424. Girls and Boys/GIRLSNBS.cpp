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
int b=0;
int g=0;
while(true){
	cin>>b>>g;
	if(b==-1&&g==-1){
		break;
	}
	if(b==0){
		cout<<g<<endl;
		continue;
	}
	if(g==0){
		cout<<b<<endl;
		continue;
	}
	if(b==g){cout<<"1"<<endl;continue;}
	int e=max(b,g)/(min(b,g)+1);
	int d=max(b,g)%(min(b,g)+1);
	if(d==0)cout<<e<<endl;
	else cout<<e+1<<endl;
}
return 0;
}
