#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
	int s[6];
	int z=1;
	while(cin>>s[0])
	{
		int c=0;
		int score=0;
		for (int i=1;i<6;i++)
		{
			cin>>s[i];
		}
		for(int i=0;i<3;i++)
		{
			if(s[i]!=0)
			{
			c++;
			score=score+(s[i]+(s[i+3]-1)*1200);
			}
		}
		cout<<"team "<<z<<":"<<" "<<c<<","<<" "<<score<<endl;
		z++;
	}
}
