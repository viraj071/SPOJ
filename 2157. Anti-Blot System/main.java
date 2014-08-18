import java.util.*;
import java.math.BigInteger;
class main
{
	public static void main(String args[])
	{
		try
		{
			Scanner sc=new Scanner(System.in);
			BigInteger n=sc.nextBigInteger();
			System.out.println();
			String[] s5=new String[n.intValue()];
			for(BigInteger i=BigInteger.ZERO; !i.equals(n);i=i.add(BigInteger.ONE))
			{
				String s1=sc.next();
				String temp=sc.next();
				String s2=sc.next();
				String temp2=sc.next();
				String s3=sc.next();
				System.out.println();
				if(s1.indexOf("machula")!=-1)
				{
					s1=(new BigInteger(s3).subtract(new BigInteger(s2))).toString();
				}
				if(s2.indexOf("machula")!=-1)
				{
					s2=(new BigInteger(s3).subtract(new BigInteger(s1))).toString();
				}
				if(s3.indexOf("machula")!=-1)
				{
					s3=(new BigInteger(s1).add(new BigInteger(s2))).toString();
				}
				s5[i.intValue()]=s1+" "+"+"+" "+s2+" "+"="+" "+s3;
			}
			for(BigInteger j=BigInteger.ZERO; !j.equals(n);j=j.add(BigInteger.ONE))
			{
				System.out.println(s5[j.intValue()]);
			}
		}
		catch(Exception e)
		{
			return;
		}
	}
}
