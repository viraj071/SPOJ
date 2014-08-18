#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <iostream>

using namespace std;

int f,n;
double a[10000];
double total;
const double PI = 3.141592653589793238462;

int check(double mid)
{
	int friends=0;
	for(int i=0;i<n;i++)
	{
		double x=a[i];
		while(x-mid>=0)
		{
			x-=mid;
			friends+=1;
			if (friends==f+1)return 1;
		}
	}
	return 0;
}


double binarysearch()
{
	double start=0.0;
	double end=total;
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
		//cout<<mid<<" "<<start<<" "<<end<<endl;
	}
	return start;
}

int main()
{
	int t;
	int x;
	scanf("%d",&t);
	while (t--)
	{	
		scanf("%d%d",&n,&f);
		total=0.0;
		for (int i=0;i<n;i++)
		{
			scanf("%d",&x);
			a[i]=PI*1*x*x;
			total+=a[i];
		}
		printf("%f\n",binarysearch());
	}
}
