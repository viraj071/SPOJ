import java.util.*;
class test
{
public static void main(String args[])
{
	int[] current=new int[1000];
	int a=0;
	Scanner sc=new Scanner(System.in);
	try
	{
		for(int i=0;;i++)
		{
			current[i]=sc.nextInt();
			if(current[i]==42)
			{
				a=i;
				break;
			}
		}
		for(int j=0;j<a;j++)
		{
			System.out.println(current[j]);
		}
	}
	catch(Exception e)
	{
		return;
	}
}
}
