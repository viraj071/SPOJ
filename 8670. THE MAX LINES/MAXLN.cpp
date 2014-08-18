#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <cstdio>

using namespace std;

int main(){
int t=0;
cin>>t;
int count=1;
long long r;
while(t--){
cin>>r;
double ans=((double)r*(double)r)*4+0.25;
printf("Case %d: %.2f\n",count,ans);
count++;
}
return 0;
}

