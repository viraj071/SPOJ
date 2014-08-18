#include <cstring>
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
	int r;
	char str[500]; 
	
	while(1)
	{
		scanf("%s",str);
		if(str[0]=='.')
		{
			break;
		}
		else
		{
		scanf("%i",&r);
		int count=(strlen(str))*r;
		for(int i=0;i<strlen(str);i++)
		{
			int z=i;
			int count1=0;
			while(count1<count)
			{
				cout<<str[z];
				count1++;
				z++;
				if(z==strlen(str))
				{
					z=0;
				}
			}
			cout<<endl;
		}
	}
		continue;
	}
}
