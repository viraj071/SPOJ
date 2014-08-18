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
	char x[4];
	while(true){
		scanf("%s",x);
		if(x==string("00e0"))
			break;
		long value=(x[0]-'0')*10;
		value+=x[1]-'0';
		value=value*(long)pow(10,(x[3]-'0'));
		long ans=0;
		long power=0;
		long temp=value;
		while(value>1){
			power++;
			value/=2;
		}
		//cout<<power<<endl;
		ans=1+(temp-pow(2,power))*2;
		printf("%ld\n",ans);
	}
	return 0;
}
