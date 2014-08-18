import java.util.Scanner;
class Main
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		String s, temp = "";
		char ch[];
		int pos[] = new int[81], p = 0;
		int k1, k2, k3;
		
		while(true)
		{
			k1 = sc.nextInt();
			k2 = sc.nextInt();
			k3 = sc.nextInt();
			if((k1 | k2 | k3) == 0) break;
			ch = sc.next().toCharArray();
			temp = "";
			StringBuffer ans = new StringBuffer(new String(ch));
			
			p = 0;
			for(int i = 0; i < ch.length; i++)
				if(ch[i] <= 'i' && ch[i] >= 'a') 
				{
					temp += ch[i];
					pos[p++] = i;
				}
			int temp1;
			if(p>0)
			{
				k1%=p;
				for(int i=0;i<p;i++)
				{
					if(i-k1<0)
					{
						temp1=p-(k1-i);
					}
					else
					{
						temp1=i-k1;
					}
					ans.setCharAt(pos[i],temp.charAt(temp1));
				}
			}
			
			p = 0;
			temp = "";
			for(int i = 0; i < ch.length; i++)
				if(ch[i] <= 'r' && ch[i] >= 'j') 
				{
					temp += ch[i];
					pos[p++] = i;
				}
					
			if(p > 0)
			{
				k2 %= p;
				for(int i=0;i<p;i++)
				{
					if(i-k2<0)
					{
						temp1=p-(k2-i);
					}
					else
					{
						temp1=i-k2;
					}
					ans.setCharAt(pos[i],temp.charAt(temp1));
				}
			}
				
			p = 0;
			temp = "";
			for(int i = 0; i < ch.length; i++)
				if(ch[i] <= 'z' && ch[i] >= 's' || ch[i] == '_') 
				{
					temp += ch[i];
					pos[p++] = i;
				}
					
			if(p > 0)
			{
				k3 %= p;
				for(int i=0;i<p;i++)
				{
					if(i-k3<0)
					{
						temp1=p-(k3-i);
					}
					else
					{
						temp1=i-k3;
					}
					ans.setCharAt(pos[i],temp.charAt(temp1));
				}
			}
			
			System.out.println(ans);
}}}
