#include <cstdio>
#include <cmath>
#define s(n) scanf("%i",&n)
#define p(n) printf("%i",n)
#define sq(n) for(int i=1;i*i<=n;i++)

int main()
{
	int t,x;
	s(t);
	while(t--)
	{
	int sum=0;
	s(x);
	if(x==1||x==0)
	sum=0;
	else
	{
	sq(x)
	{
	sum+= (x%i)? 0 : ((i*i==x)? i : i+x/i);
	}
	sum=sum-x;
	}
	p(sum);
	printf("\n");
	}
return 0;
}

