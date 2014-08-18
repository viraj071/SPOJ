#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int main()
{
	int t;
	scanf("%i",&t);
	while(t!=0)
	{
		double ans;
		ans=t*t/2.0/acos(-1.0);
		printf("%.2f\n",ans);
		scanf("%i",&t);
	}
}