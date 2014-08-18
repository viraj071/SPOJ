import java.util.*;
class main
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt(),a;
		StringBuilder s;
		int k=1;
		for (int i=0;i<n;i++)
		{
			a=sc.nextInt()-1;
			s=new StringBuilder(sc.next().trim()).deleteCharAt(a);
			System.out.println(k++ + " " + s);
		}
	}
}
