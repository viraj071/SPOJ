#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

string s1,s2,ans="";
int x[26], y[26];

int main()
{
while(cin>>s1)
{
cin>>s2;
ans="";
memset(x, 0, sizeof x);
memset(y, 0, sizeof y);
int l=s1.size();
for(int i=0;i<l;i++)
{
x[s1[i]-'a']++;
}
l=s2.size();
for(int i=0;i<l;i++)
{
y[s2[i]-'a']++;
}
for(int i=0;i<26;i++)
{
int m=min(x[i],y[i]);
for(int j=0;j<m;j++)
ans=ans+(char)('a'+i);
}
cout<<ans<<endl;
}
return 0;
}
