#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	long long nf,stamps;
	int n,c=0;
	cin>>n;
	for(int j=1;j<=n;j++)
	{
		c=0;
		cin>>stamps>>nf;
		int a[nf];
		for(int i=0;i<nf;i++)
		{
			cin>>a[i];
		}
		sort(a,a+nf);
		for(int i=nf-1;i>=0;i--)
		{
			if(stamps<=0)
				break;
			stamps=stamps-a[i];
			c++;
		}
		cout<<"Scenario #" <<j<<":\n";
		if(stamps>0)
			cout<<"impossible\n\n";
		else
			cout<<c<<endl<<endl;
	}
}
