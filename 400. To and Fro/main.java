import java.util.*;
class main
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int n;
String s1;
n=sc.nextInt();
while(true)
{
if(n==0)
break;
s1=sc.next();
int z=s1.length();
StringBuilder s2=new StringBuilder("");
int rows=z/n;
char[] a=new char[z];
a=s1.toCharArray();
char[][] b=new char[rows][n];
int x=0;
for(int i=0;i<rows;i++)
{
	if(i%2==0)
	{
	for(int j=0;j<n;j++)
	{
		b[i][j]=a[x];
		x++;
	}
	}
	if(i%2!=0)
	{
	for(int j=n-1;j>=0;j--)
	{
		b[i][j]=a[x];
		x++;
	}
	}
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<rows;j++)
	{
		s2.append(b[j][i]);
	}
}
System.out.println(s2);
n=sc.nextInt();
}
}
}
