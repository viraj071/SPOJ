#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i=1;
    long a,n;
    while(1)
    {
        cin>>n;
        if(n==0) return 0;
        else
        cout<<"Case "<<i++<<", N = "<<n<<", # of different labelings = "<<long(pow(n,n-2))<<endl;

    }


}