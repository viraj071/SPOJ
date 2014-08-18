#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>

using namespace std;
	long long int sum;
	char op;
	long long int operand;


long long int calculate(){
	if(op=='*'){
		return sum*operand;
	}
	if(op=='/'){
		return sum/operand;
	}
	if(op=='+'){
		return sum+operand;
	}
	if(op=='-'){
		return sum-operand;
	}
}

int main(){
	int t=0;
	cin>>t;
	while(t--){
		cout<<endl;
		cin>>operand;
		sum=operand;
		while(true){
		cin>>op;
		if(op=='='){
			cout<<sum<<endl;
			break;
		}
		cin>>operand;
		sum=calculate();
		}
		
	}
	return 0;
}
