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
unsigned long long t=0;
cin>>t;
if ((t&(t-1))==0){
	cout<<"TAK"<<endl;
}
else cout<<"NIE"<<endl;
}
