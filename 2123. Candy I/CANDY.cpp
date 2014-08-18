#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	while(1)
	{
		int t;
		int count=0;
		scanf("%i",&t);
		if(t==-1)
		{
			break;
		}
			int a[10010];
			int sum=0;	
			for(int i=0;i<t;i++)
			{
			scanf("%i",&a[i]);
			sum=sum+a[i];
			}
			if(sum%t!=0)
			{
				printf("-1\n");
			}
			else
			{
				int avg=sum/t;
				for(int i=0;i<t;i++)
				{
					if(a[i]>avg)
					{
						count=count+(a[i]-avg);
					}
				}
				printf("%i\n",count);
			}
			continue;
	}
	return 0;
}