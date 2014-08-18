#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<int , int >ma;
	int n,m,ans=0,a,b;
	scanf("%d",&n);
	scanf("%d",&m);
	if(m==n-1)
		ans=1;
	for(int i=0;i<m;i++)
	{
		scanf("%d",&a);
		scanf("%d",&b);
		if(ma.find(a)!=ma.end()&&ma.find(b)!=ma.end())
			ans=0;

		ma[a]=1;
		ma[b]=1;
	}
	if(ans==1)
		printf("YES\n");
	else
		printf("NO\n");
}