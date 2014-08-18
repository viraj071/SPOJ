#include <cstdlib>
#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}

main()
{
    string s;
    int a, temp = 0;
    long long n;
    scanf("%lld", &n);
    for(long long j = 0; j < n; j++)
    {
        temp = 0;
        scanf("%d", &a);
        cin >> s;
        if(a == 0)
        {
            cout << s << endl;
            continue;
        }
        int i = 0, l = s.size();
        while(i < l)
        {
            temp = temp * 10 + (s[i++] - '0');
            if(temp >= a)
                temp = temp - (temp / a) * a;
        }
        printf("%d\n", gcd(a, temp));
    }
}
