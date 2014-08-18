import java.util.*;
import java.io.*;

class Main
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		String accept="";
		while(sc.hasNext())
		{
			accept+=sc.nextLine()+"\n";
		}
		accept=accept.replaceAll("BUG","");
		System.out.println(accept);
	}
}
