#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int m,n;
	while(1)
	{
		scanf("%d%d",&m,&n);
		if(m==-1&&n==-1)
		{
			break;
		}
		if(m==1||n==1)
		{
			cout<<m<<"+"<<n<<"="<<m+n<<endl;
		}
		else
		{
			cout<<m<<"+"<<n<<"!="<<m+n<<endl;
		}
	}
}
