#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <sstream>
#define f(i, n) for(int i = 0; i < n; i++)
#define s(n) scanf("%d", &n)
#define inf (int)1e9
using namespace std;

main()
{
	string s, ans;
    while(cin >> s)
    {
        ans = "";
        bool java = false, cpp = false;
        int len = s.length();
        if((s[0] >= 'A' && s[0] <= 'Z') || (s[len - 1] == '_') || s[0] == '_')
        {
              printf("Error!\n");
              continue;
        }
        
        bool er = false;
        for(int i = 0; i < len - 1; i++)
                if(s[i] == '_' && s[i + 1] == '_')
                {
                        er = true;
                        break;
                }
        if(er)
        {
              printf("Error!\n");
              continue;
        }
        
        f(i, len)
        {
            if(s[i] == '_') cpp = true;
            if(s[i] >= 'A' && s[i] <= 'Z') java = true;
        }
        
        if(java && cpp || (s[0] >= 'A' && s[0] <= 'Z'))
            ans = "Error!";
        
        else if(!(java || cpp))
            ans = s;
        
        else if(java)
            for(int i = 0; i < len; i++)
            {
                if(s[i] >= 'A' && s[i] <= 'Z')
                {
                    ans += '_';
                    ans += (char)(s[i] + 32);
                }
                else ans += s[i];
            }
        
        else
            for(int i = 0; i < len; i++)
            {
                if(s[i] == '_') ans += (char)(s[++i] - 32);
                else ans += s[i];
            }
        
        cout << ans << endl;
    }
}
