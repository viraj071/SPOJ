import java.util.*;
import java.math.*;
class fctrl2
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int no=sc.nextInt();
BigInteger[] a=new BigInteger[no];
for(int i=0;i<no;i++)
{
a[i]=fact(sc.nextInt());
}
for(int i=0;i<no;i++)
{
System.out.println(a[i]);
}
}
public static BigInteger fact(long b)
{
BigInteger c= BigInteger.valueOf(1);
for(int i=1;i<=b;i++)
{
c=c.multiply(BigInteger.valueOf(i));
}
return c;
}
}