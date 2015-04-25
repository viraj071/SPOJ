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

long long ans=0;
long long a,b;

vector<long long> getSubsets(vector<long long> &s, int start, int siz){
	vector<long long> temp;
	for(int j=0;j<pow(2,siz);++j){
		long long sum=0;
		for(int i=start;i<=start+siz;++i){
			if(j&(1<<(i-start))){
				sum+=s[i];
			}
		}
		temp.push_back(sum);
	}
	return temp;
}
void printv(vector<long long> s){
	for(int i=0;i<s.size();++i){
		cout<<s[i]<<" ";
	}
}

void subsets(vector<long long> &s){
	int n=s.size();
	vector<long long>::iterator low,high;
	vector<long long> left=getSubsets(s,0,n/2);
	vector<long long> right=getSubsets(s,n/2,n&1?n/2+1:n/2);
	sort(right.begin(),right.end());
	for(int i=0;i<left.size();++i){
		low=lower_bound(right.begin(),right.end(),a-left[i]);
		high=upper_bound(right.begin(),right.end(),b-left[i]);
		ans+=(high-right.begin())-(low-right.begin());
	}
}

int main(){
	int n;
	scanf("%d%lld%lld",&n,&a,&b);
	vector<long long> s(n,0);
	for(int i=0;i<n;i++){
		scanf("%lld",&s[i]);
	}
	sort(s.begin(),s.end());
	subsets(s);
	printf("%lld\n",ans);
	return 0;
}
