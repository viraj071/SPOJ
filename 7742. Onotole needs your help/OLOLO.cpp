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
int n=0;
cin>>n;
long long int ans=0;
long long int temp;
while(n--){
	scanf("%lld",&temp);
	ans=ans^temp;	
}
printf("%lld\n",ans);
return 0;
}
