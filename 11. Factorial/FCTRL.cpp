#include <cstdlib>
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, x, c;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        c = 0; 
        for(int j = 5; j <= x; j *= 5)
            c +=  x / j; 
        cout << c << endl;
    }
}
