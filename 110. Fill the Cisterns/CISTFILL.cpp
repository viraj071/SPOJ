#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <iostream>

using namespace std;

int n;
long long int a[50001][3];
long long int y;
long long int v;
double filled;
int check(double mid)
{
	long long int x;
	filled=0;
	for(int i=0;i<n;i++)
	{
		x=a[i][0]+a[i][1];
		if (mid>=x)
		{
			filled+=a[i][2];
		}
		else if (mid<x&&mid>a[i][0])
		{
			filled+=(mid-a[i][0])*a[i][2]/a[i][1];
		}
	}
	if (filled>=v)return 0;
	return 1;
}

double binarysearch()
{
	double start=0.0;
	double end=1040000.0;
	for(int i=0;i<100;i++)
	{
		double mid=(start+end)/2.0;
		if(check(mid)==1)
		{
			start=mid;
		}
		else
		{
			end=mid;
		}
		//cout<<mid<<" "<<filled<<endl;
		//cout<<start<<" "<<end<<endl;
	}
	return start;
}


int main()
{
	double total;
	int k;
	scanf("%d",&k);
	while (k--)
	{	
		v=0;
		total=0.0;
		scanf("%d",&n);
		for (int i=0;i<n;i++)
		{
			long long int summ=1;
			for (int j=0;j<4;j++)
			{
				scanf("%lld",&y);
				if(j==1) a[i][j]=y;
				if(j==0) a[i][j]=y;
				else
				{
					summ*=y;
				}	
			}
			a[i][2]=summ;
			total+=summ;
		}
		/*for (int z=0;z<n;z++)
		{
			cout<<a[z][0]<<" "<<a[z][1]<<" "<<a[z][2]<<"\n";
		}*/
		scanf("%lld",&v);
		if (total<v)
		{
			cout<<"OVERFLOW"<<endl;
		}
		else
		{
			printf("%.2f\n",binarysearch());
		}
	}
}
