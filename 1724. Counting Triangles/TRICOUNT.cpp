#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int n;
    long long s, s2;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
            cin>>s;
            s2 = (s * (s + 2) * (2 * s + 1) / 8);
            cout<<s2<<endl;;
    }
}
