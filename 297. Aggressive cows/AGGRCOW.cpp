#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>

using namespace std;

int c,n;
long long int a[100000];

int check(long long int x)
{
	int cowsp=1;
	long long int lastp=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]-lastp>=x)
		{
			cowsp++;
			lastp=a[i];
			if(cowsp==c)return 1;
		}
	}
	return 0;
}
long long int binarysearch()
{
	long long int start=0;
	long long int end=a[n-1];
	while(end-start>1)
	{
		long long int mid=start+(end-start+1)/2;
		if(check(mid)==1)
		{
			start=mid;
		}
		else
		{
			end=mid;
		}
	}
	return start;
}
int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{	
		scanf("%d%d",&n,&c);
		for (int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		sort(a,a+n);
		printf("%lld\n",binarysearch());
	}
}
