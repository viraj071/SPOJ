#include<iostream>
#include<cmath>
using namespace std;   
int main()
{
int t;
cin>>t;
double n;
double pi = 2*acos(0);
long long int len,l;

while(t-->0)
{
        cin>>n;
        if(n==0.00||n==1.00)l=1;

        else{
        l=(((log(2.00*pi*n)/2.00)+(n*(log(n)-1.00)))/log(10.0))+1;
        }
       
        
        cout<<l<<endl;
}
return 0;
}
