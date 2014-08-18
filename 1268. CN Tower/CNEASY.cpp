#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

main()
{
int t,i,j,x;
cin>>t;
while(t>0)
{
cin>>x;
double a[x+1];
string w[x];
double temp;
double max;
for(i=0;i<x;i++)
{
	cin>>w[i];
	cin>>a[i];
}
for(i=0;i<x;i++)
{
	for(j=i;j<x;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;	
		}	
	}	
}
a[x]=360+a[0];
max=a[x]-a[x-1];
for(i=0;i<x;i++)
{
temp=a[i+1]-a[i];
	if(temp>max)
	{
	max=temp;
	}
}
max=360-max;			
cout<<floor((max*12.0)+0.99)<<endl;
t=t-1;
}
}
