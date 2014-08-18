#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string s1,s2;
		cin>>s1;
		cin>>s2;
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
		int ans=0;
		cout<<s1<<s2;
		if(s1!=s2)
		{
			ans=1;
		}
		if(ans==0)
		printf("YES\n");
		else
		printf("NO\n");
	}
return 0;
}
