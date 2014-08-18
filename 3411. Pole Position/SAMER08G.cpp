#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
	int t,i,z;
	cin>>t;
	int c[1000],x[1000],r[1000];
	while(t!=0)
	{
		int a=0;
		for(i=0;i<t;i++)
		{
		r[i]=0;
		}
		for(i=0;i<t;i++)
		{
			cin>>c[i];
			cin>>x[i];
		}
		for(i=0;i<t;i++)
		{
			z=i+x[i];
			if(z<t&&z>=0)
			{
				if(r[z]==0)
				{
					r[z]=c[i];
				}
				else
				{
					a=1;
				}
			}
			else
			{
			a=1;
			}
		}
		if(a==1)
		{
		cout<<"-1"<<endl;
		}
		if(a==0)
		{
			for(i=0;i<t;i++)
			{
				cout<<r[i]<<" ";
			}
			cout<<endl;
		}
		cin>>t;
	}
return 0;
}
