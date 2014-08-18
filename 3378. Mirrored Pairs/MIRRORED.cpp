#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	char a,b;
	printf("Ready\n");
	while(1)
	{
		a=getchar();
		b=getchar();
		getchar();
		if(a==' ' && b==' ')
			break;
		if((a == 'b' && b == 'd') || (a == 'd' && b == 'b') || (a == 'p' && b == 'q') || (a == 'q' && b == 'p'))
		{
			printf("Mirrored pair\n");
		}
		else
		{
			printf("Ordinary pair\n");
		}
	}
}
