#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int n,k,s;
	int a[1000];
	scanf("%d",&n);
	scanf("%d",&k);
	scanf("%d",&s);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int sum=k*s;
	int count=0;
	for(int i=n-1;i>=0;i--)
	{
		if(sum<=0)
		{
			break;
		}
		sum=sum-a[i];
		count++;
	}
	printf("%d",count);
	return 0;
}