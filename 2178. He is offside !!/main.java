import java.util.*;
class main
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int min=(int)1e4;
		while(true)
		{
			int a=sc.nextInt();
			int d=sc.nextInt();
			int[] c=new int[11];
			if(a==0 && d==0)
				break;
			min=(int)1e4;
			for(int i=0;i<a;i++)
				min=Math.min(min,sc.nextInt());
			for(int i=0;i<d;i++)
				c[i]=sc.nextInt();
			Arrays.sort(c,0,d);
			if(min<c[0]||min<c[1])
				System.out.println("Y");
			else
				System.out.println("N");
		}
	}
}
