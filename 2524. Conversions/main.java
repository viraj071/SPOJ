import java.util.*;

class main
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		String s1,s2,s4;
		String[] s5=new String[n];
		double s3;
		for(int i=0;i<n;i++)
		{
			s1=sc.next();
			s2=sc.next().trim();
			Formatter fmt=new Formatter();
			if(s2.equals("kg"))
			{
				s3=(Double.parseDouble(s1))*2.2046;
				s4="lb";
				fmt.format("%.4f",s3);
				s5[i]=(i+1)+" "+fmt+" "+s4;
			}
			if(s2.equals("l"))
			{
				s3=(Double.parseDouble(s1))*0.2642;
				s4="g";
				fmt.format("%.4f",s3);
				s5[i]=(i+1)+" "+fmt+" "+s4;
			}
			if(s2.equals("lb"))
			{
				s3=(Double.parseDouble(s1))*0.4536;
				s4="kg";
				fmt.format("%.4f",s3);
				s5[i]=(i+1)+" "+fmt+" "+s4;
			}
			if(s2.equals("g"))
			{
				s3=(Double.parseDouble(s1))*3.7854;
				s4="l";
				fmt.format("%.4f",s3);
				s5[i]=(i+1)+" "+fmt+" "+s4;
			}
		}
		System.out.println();
		for(int i=0;i<n;i++)
		{
			System.out.println(s5[i]);
		}
	}
}
