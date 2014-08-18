import java.util.*;
class main
{
	public static int value(char m)
	{
		switch(m)
		{
			case 'm' :return 1000;
			case 'c' :return 100;
			case 'x' :return 10;
			case 'i' :return 1;
		}
		return 0;
	}
	public static StringBuilder convert(int a)
	{
		StringBuilder s=new StringBuilder("");
		String x="mcxi";
		int div=1000;
		int temp=0;
		int i=0;
		while(a!=0)
		{
			temp=a/div;
			if(temp!=0)
			{
				if(temp==1)
				{
					s.append(x.charAt(i++));
				}
				else
				{
					s.append(temp+""+x.charAt(i++));
				}
			}
			else
			{
				i++;
			}
			a=a%div;
			div=div/10;
		}
		return s;
	}
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		StringBuilder[] ans=new StringBuilder[n];
		for(int j=0;j<n;j++)
		{
			String s1=sc.next();
			String s2=sc.next().trim();
			int a1=0;
			int a2=0;
			for(int i=0;i<s1.length();i++)
			{
				if(Character.isDigit(s1.charAt(i)))
				{
					a1+=(s1.charAt(i)-'0')*value(s1.charAt(++i));
				}
				else
				{
					a1+=value(s1.charAt(i));
				}
			}
			for(int i=0;i<s2.length();i++)
			{
				if(Character.isDigit(s2.charAt(i)))
				{
					a2+=(s2.charAt(i)-'0')*value(s2.charAt(++i));
				}
				else
				{
					a2+=value(s2.charAt(i));
				}
			}
			ans[j]=convert(a1+a2);
		}
		for(int j=0;j<n;j++)
		{
			System.out.println(ans[j]);
		}
	}
}
