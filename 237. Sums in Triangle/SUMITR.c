#define f(a,c) for(a=1;a<=c;a++) 
#define s(v) scanf("%d",&v)
int max(a,b){return a>b?a:b;}
main(){int s,n,i,j,x,t[101][101];s(s);while(s--){x=0;s(n);f(i,n)f(j,i)s(t[i][j]),x=(t[i][j]+=max(t[i-1][j-1],t[i-1][j]))>x?t[i][j]:x;printf("%d\n",x);}}
