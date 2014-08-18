#include <iostream>

using namespace std;

int main()
{
	unsigned long n;
	cin>>n;
	if(n%10==0)
		cout<<2<<endl;
	else
		cout<<1<<endl<<n%10<<endl;
	return 0;
}
