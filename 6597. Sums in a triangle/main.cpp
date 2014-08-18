#include<cstdio>
#define s(n) scanf("%d",&n)
int i,j,t,n,a[102][102];main(){s(t);while(t--){s(n);for(i=0;i<n;i++)for(j=0;j<=i;j++)s(a[i][j]);for(i=n-2;i>=0;i--)for(j=i;j>=0;j--)a[i][j]+=(a[i+1][j]>a[i+1][j+1])? a[i+1][j]:a[i+1][j+1];printf("%d\n",a[0][0]);}}
