#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
	int n=0;
	while(true)
	{
		cin>>n;
		if(n==0)
		{
			break;
		}
		int sum=0;
		for(int i=n;i>=1;i--)
		{
			sum=sum+(i*i);
		}
		cout<<sum<<endl;;
	}
}
