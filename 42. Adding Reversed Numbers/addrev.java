import java.util.*;
class addrev
{
public static void main(String args[])
{
int cases,c;
Scanner sc=new Scanner(System.in);
cases=sc.nextInt();
try
{
while(cases>0)
{
int a=sc.nextInt();
int b=sc.nextInt();
int ra=rev(a,0);
int rb=rev(b,0);
int rc=ra+rb;
c=rev(rc,0);
System.out.println(c);
cases--;
}
}
catch(Exception e)
{
return;
}
}
public static int rev(int m,int temp)
{
while(m!=0)
{
temp=temp*10 + m%10;
m=m/10;
}
return temp;
}


}