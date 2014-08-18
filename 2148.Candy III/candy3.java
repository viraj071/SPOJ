import java.util.*;
class candy3
{
	public static void main(String args[])
	{
		int t;
		Scanner sc=new Scanner(System.in);
		t=sc.nextInt();
		System.out.println();
		String[] s=new String[t];
		int n;
		try
		{
			for(int i=0;i<t;i++)
			{
				n=sc.nextInt();
				long[] abc=new long[n];
				long sum=0;
				for(int j=0;j<n;j++)
				{
					abc[j]=sc.nextLong();
					sum=(sum+abc[j])%n;
				}
				if(sum==0)
				{
					s[i]="YES";
				}
				else
				{
					s[i]="NO";
				}
				System.out.println();
			}
			for(int i=0;i<t;i++)
			{
				System.out.println(s[i]);
			}
		}
		catch(Exception e)
		{
			return;
		}
	}
}
