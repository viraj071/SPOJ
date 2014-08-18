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
	long b,s;
	scanf("%ld",&b);
	for(int i=1;i<=b;i++){
		scanf("%ld",&s);
		int values[s];
		for(long j=0;j<s-1;j++){
			scanf("%d",&values[j]);
		}
		long long int curr_max=values[0];
		long currstart=1;
		long currend=2;
		long start=1;
		long end=2;
		long long int max_so_far=values[0];
		for(int k=1;k<s-1;k++){
			long long int temp=curr_max+values[k];
			curr_max=values[k];
			if(temp>=curr_max){
				curr_max=temp;
				currend=k+2;
			}
			else{
				currstart=k+1;
				currend=k+2;
			}
			if(curr_max>max_so_far){
				max_so_far=curr_max;
				start=currstart;
				end=currend;
				continue;
			}
			if(curr_max==max_so_far){
				if((currend-currstart)>(end-start)){
					max_so_far=curr_max;
					start=currstart;
					end=currend;
				}
				else if((currend-currstart)==(end-start)&&currstart<start){
					max_so_far=curr_max;
					start=currstart;
					end=currend;
				}
			}
		}
		if(max_so_far>0)
			printf("The nicest part of route %d is between stops %ld and %ld\n",i,(start),(end));
		else
			printf("Route %d has no nice parts\n",i);
	}
	return 0;
}
