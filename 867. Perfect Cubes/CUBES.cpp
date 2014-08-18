#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
	int ans,J,K;
	for(int i=6;i<101;i++)
	{
		ans=i*i*i;
		for(int j=2;j<i;j++)
		{
			J=j*j*j;
			for(int k=j+1;k<i;k++)
			{
				K=k*k*k;
				for(int m=k+1;m<i;m++)
				{
					if(ans==(J+K+m*m*m))
					{
						printf("Cube = %d, Triple = (%d,%d,%d)\n",i,j,k,m);
					}
				}
			}
		}
	}
}
