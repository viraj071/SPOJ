import java.util.*;

class main
{
	public static boolean check(String s)
	{
	int l=s.length() >> 1;
	int n=s.length()-1;
	int c=0;
	boolean num=true;
	for(int i=0;i<l;i++)
	{
	if(s.charAt(i)!=s.charAt(n-i))
	{
	c++;
	}
	if(c>1)
	{
	num=false;
	}
	}
	return num;
	}
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		String s;
		String s1,s2;
		try
		{
			while(true)
			{
				s=sc.next();
				boolean b=false;
				if(s.equals("*END*"))
				{
					break;
				}
				int l=s.length();
				if(l>1 && l<7)
				{
					System.out.println(s+" is a double near palindrome.");
					continue;
				}
				for(int i=1;i<l&&!b;i++)
				{
					s1=s.substring(0,i);
					s2=s.substring(i);
					b=check(s1) & check(s2);
				}
				System.out.print(s);
				if(b)
				{
					System.out.println(" is a double near palindrome.");
				}
				else
				{
					System.out.println(" is not a double near palindrome.");
				}
			}
		}
		catch(Exception e)
		{
			return;
		}
	}
}
