import java.util.Scanner;
import java.util.Hashtable;
class Main
{
	static Hashtable<Integer, Long> h = new Hashtable();
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		while(sc.hasNext())
			System.out.println(convert(sc.nextInt()));
	}
	static long convert(int n)
	{
		if(n < 12)
			return n;
		Long x = h.get(n);
		if(x != null)
			return x;
		h.put(n, convert(n / 2) + convert(n / 3) + convert(n / 4));
		return h.get(n);
	}
}