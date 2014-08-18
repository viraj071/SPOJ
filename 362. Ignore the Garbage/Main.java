import java.util.Scanner;
import java.math.BigInteger;
class Main
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String a;
		char s[] = s = "0125986".toCharArray();
		for(int z = 0; z < n; z++)
		{
			a = sc.nextBigInteger().toString(7);
			StringBuffer ans = new StringBuffer("");
			for(int i = a.length() - 1; i >= 0; i--)
				ans.append(s[a.charAt(i) - '0']);
			System.out.println(ans);
		}
	}
}