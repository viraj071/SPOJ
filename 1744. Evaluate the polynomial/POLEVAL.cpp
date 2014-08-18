#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
int n,k,a[1000],p[100],z=1;
long long ans=0,x;
while(true)
{
scanf("%d",&n);
if(n==-1)
break;
for(int i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&k);
for(int i=0;i<k;i++)
{
scanf("%d",&p[i]);
}
printf("Case %d:\n",z++);
for(int i=0;i<k;i++)
{
ans=0;
x=1;
for(int j=n;j>=0;j--)
{
ans=ans+a[j]*x;
x=x*p[i];
}
printf("%I64d\n", ans);
}
}
}
