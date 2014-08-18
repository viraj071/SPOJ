import java.util.*;
import java.math.BigInteger;
class eight
{
	public static void main(String args[])
	{
		int notc;
		long c;
		Scanner sc=new Scanner(System.in);
		notc=sc.nextInt();
		long[] k= new long[notc];
		try
		{
			for(int i=0;i<notc;i++)
			{
				k[i]=sc.nextLong();
				c=(k[i]-1)*250+192;
				System.out.println(c);
			}
		}
		catch(Exception e)
		{
			return;
		}
	}
}
