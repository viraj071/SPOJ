import java.util.Scanner;
import java.math.BigInteger;
class Main
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		String n = "";
		while(sc.hasNext())
		{
			n = sc.next();
			if(!n.equals("" + 1))
				System.out.println((new BigInteger(n).multiply(new BigInteger("" + 2))).subtract(new BigInteger("" + 2)));
			else
				System.out.println(1);
		}
	}
}