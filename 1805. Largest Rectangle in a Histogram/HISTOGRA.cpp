#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <list>
#include <stack>

using namespace std;
long long hist[100000];
long long n;

long long int getmaxarea(){
	stack<long long > s;
	long long i=0;
	long long int maxarea=0;
	long long tp;
	long long areawithtop;
	while(i<n){
		if(s.empty()||hist[s.top()]<=hist[i]){
			s.push(i++);
		}
		else{
			tp=s.top();
			s.pop();
			areawithtop=hist[tp]*(s.empty()?i:i-s.top()-1);
			if(maxarea<areawithtop){
				maxarea=areawithtop;
			}
		}
	}
	while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        areawithtop = hist[tp] * (s.empty() ? i : i - s.top() - 1);
 
        if (maxarea < areawithtop)
            maxarea = areawithtop;
    }
    return maxarea;
}
int main(){
	while(true){		
		scanf("%lld",&n);
		if(n==0){
			break;
		}
		for(long i=0;i<n;i++){
			scanf("%lld",&hist[i]);
		}
		printf("%lld\n",getmaxarea());
	}
	return 0;
}
