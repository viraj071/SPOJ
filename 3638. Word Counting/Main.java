import java.util.*;
import java.io.*;
class Main
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		String temp = sc.nextLine();
		while(t-->0)
		{
			int c=1,best=0,prev=-1;
			String s[]=sc.nextLine().split(" ");
			for(int i=0;i<s.length;i++)
			{
				if(s[i].length()==0 ||s[i].equals("")||s[i].equals(null))
				{	
					continue;
				}
				if(s[i].length()==prev)c++;
				else
				{
					best=Math.max(c,best);
					c=1;
					prev=s[i].length();
				}	
			}
			best = Math.max(best, c);
			System.out.println(best);
		}
	}
}		
