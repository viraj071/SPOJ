import java.util.*;

class main
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int n;
n=sc.nextInt();
while(n!=0)
{
int a[]=new int[n];
int b[]=new int[n];
String s[] =new String[n];
for(int j=0;j<n;j++)
{
	a[j]=sc.nextInt();
	b[j]=0;
}
int z=0;
int c=0;
int m=1;
for(int i=0;i<n;i++)
{
	if(a[i]!=m)
	{
		if(z!=0)
		{
		if(b[z-1]==m)
		{
			b[z-1]=0;
			z=z-1;
			m++;
			i=i-1;
		}
		else
		{
			b[z]=a[i];
			if(z!=0)
			{
				if(b[z]>b[z-1])
				{
				c=1;
				break;
				}
			}
			z=z+1;
		}
		}
		else
		{
			b[z]=a[i];
			z=z+1;
		}
	}
	if(a[i]==m)
	{
	m++;
	}
}
/*for(int j=0;j<n;j++)
{
	System.out.println(a[j]);
	System.out.println(b[j]);
}*/
if(c==0)
{
	System.out.println("yes");
}
else
{
System.out.println("no");
}
n=sc.nextInt();
}
}
}
