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
	long number,quotient;
	scanf("%ld",&number);
	if(number==0){
		printf("0\n");
		return 0;
	}
	string ans="";
	quotient=number;
	while(quotient!=0){
		if(number<0){
			if(number%2==0){
				quotient=-1*(-1*number/2);
			}
			else{
				quotient=-1*((-1*number+1)/2);
			}
		}
		else{
			quotient=number/2;
		}
		if(number==quotient*2)
		{
			ans="0"+ans;
		}
		else{
			ans="1"+ans;
		}
		number=-1*quotient;
	}
	cout<<ans<<endl;
	return 0;
}
