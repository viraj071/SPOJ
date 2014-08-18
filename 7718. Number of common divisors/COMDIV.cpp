#include <iostream>
#include <cstdio>
#include <math.h>
#define s(n) scanf("%d",&n)
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
	return a;
	else
	gcd(b,a%b); 
}

int main()
{
	int t;
	s(t);
	while(t--)
	{
		int a,b,c=0;
		s(a);
		s(b);
		c=gcd(a,b);
		int count=0;
		for(int i=1;i<=sqrt(c);i++)
		{
			if(c%i==0)
			{
				count+=2;;
			}
			if(i*i==c)
			count--;
		}
		printf("%d\n",count);
	}
	return 0;
}
