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
	int t=0;
	double a,b,c,d,s;
	scanf("%d",&t);
	while(t--){
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		s=(a+b+c+d)/2.0;
		printf("%lf\n",sqrt((s-a)*(s-b)*(s-c)*(s-d)));
	}
	return 0;
}
