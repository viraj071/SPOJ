#include <iostream>

using namespace std;

int main()
{
	long long int n;
	cin>>n;
	long long int count=0;
	for(long long int i=1;i<=n;i++)
	{
		for(long long int j=i;i<=n;j++)
		{
			if(i*j>n)
			{
				break;
			}
			count++;
		}
	}
	cout<<count;
}