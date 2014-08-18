#include <cstdlib>
#include <cstdio>

using namespace std;
int main()
{
	int maxmg=0,maxmn=0,temp,n,g,mg;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		maxmg=0;
		maxmn=0;
		printf("\n");
		scanf("%d",&g);
		scanf("%d",&mg);
		for(int j=0;j<g;j++)
		{
			scanf("%d",&temp);
			if(temp>maxmg)
			{
				maxmg=temp;
			}
		}
		for(int j=0;j<mg;j++)
		{
			scanf("%d",&temp);
			if(temp>maxmg)
			{
				maxmn=temp;
			}
		}
		if(maxmn>maxmg)
		{
			printf("MechaGodzilla\n");
		}
		else
		{
			printf("Godzilla\n");
		}
	}
}
