import java.util.Scanner;
import java.math.BigInteger;
class Main
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		BigInteger a = BigInteger.ZERO;
		BigInteger b = BigInteger.ZERO;
		for(int i = 0; i < 10; i++)
		{
			a = new BigInteger("" + sc.next());
			b = new BigInteger("" + sc.next());
			System.out.println(a.add(b).divide(new BigInteger("" + 2)));
			System.out.println(a.subtract(b).divide(new BigInteger("" + 2)));
		}
	}
}