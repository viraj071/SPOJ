#include <cstdio>
using namespace std;

int main()
{
	int a1,a2,a3;
	while(1)
	{
		int c=0;
		int temp1=0,temp2=0;
		scanf("%d%d%d",&a1,&a2,&a3);
		if(a1==0&&a2==0&&a3==0)
		{
			break;
		}
		temp1=a2-a1;
		temp2=a3-a2;
		if(temp1==temp2)
		{
			c=a3+temp2;
			printf("AP %d\n",c);
		}
		else
		{
			c=a3*(a2/a1);
			printf("GP %d\n",c);
		}
	}
	return 0;
}