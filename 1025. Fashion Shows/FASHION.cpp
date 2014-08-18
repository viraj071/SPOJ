#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
int t,n,temp1[1000],temp2[1000];
long sum;
scanf("%d",&t);
for(int i=0;i<t;i++)
{
sum=0;
scanf("%d",&n);
for(int j=0;j<n;j++)
{
scanf("%d",temp1+j);
}
for(int j=0;j<n;j++)
{
scanf("%d",temp2+j);
}
sort(temp1, temp1+n);
sort(temp2,temp2+n);
for(int k=0;k<n;k++)
{
sum=sum+temp1[k]*temp2[k];
}
cout<<sum<<endl;
}
}
