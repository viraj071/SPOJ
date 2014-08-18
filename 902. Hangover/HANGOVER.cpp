#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	float t;
	cin>>t;
	while(t!=0.00)
	{
		int count=2;
		float z=0.0;
		while(z<t)
		{
			z=z+(1.0/count);
			count=count+1;
		}
		cout<<(count-2)<<" card(s)"<<endl;
		cin>>t;
	}
	return 0;
}
