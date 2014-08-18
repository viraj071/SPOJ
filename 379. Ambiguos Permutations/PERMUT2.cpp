#include <cstdlib>
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    long n, a[100000], b[100000];
    back : while(1)
    {
        scanf("%ld", &n);
        if(n == 0) break;
        for(long i = 0, k = 1; i < n; i++)
        {
            scanf("%ld", &a[i]);
            b[a[i] - 1] = k++;
        }
        for(long i = 0; i < n; i++)
            if(b[i] != a[i])
            {
               printf("not ambiguous\n");
               goto back;
            }
        printf("ambiguous\n");
    }
}
