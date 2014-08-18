#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int t;
	int n;
	int m,q;
	int a[20000];
	int b[20000];
	int c[30000];
	string r[30000];
	scanf("%i",&t);
	while(t--)
	{
		scanf("%i",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%i",&a[i]);
		}
		scanf("%i",&m);
		for(int i=0;i<m;i++)
		{
			scanf("%i",&b[i]);
		}
		scanf("%i",&q);
		for(int i=0;i<q;i++)
		{
			scanf("%i",&c[i]);
			r[i]="-1";
		}
		for(int i=0;i<q;i++)
		{
			while(m>=0)
			{
				if(c[i]==a[m])
				{
					r[i]="1";
				}
				m--;
			}
			while(n>=0)
			{
				if(c[i]==b[n])
				{
					if(r[i]=='1')
					{
					r[i]="both";
					}
					else
					{
						r[i]="2";
					}
				}
				n--;
			}
		}
		for(int i=0;i<q;i++)
		{
			cout<<r[i]<<endl;
		}
	}
}
