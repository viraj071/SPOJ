#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int t;
string s[5];
	
bool royalflush()
{
	for(int i=1;i<5;i++)if(s[i][1]!=s[0][1])return false;
	if(s[0][0]!='A'||s[1][0]!='J'||s[2][0]!='K'||s[3][0]!='Q'||s[4][0]!='T')return false;
	return true;
}
bool four()
{
	if(s[0][0] == s[1][0] && s[0][0] == s[2][0] && s[0][0] == s[3][0]) return true;
	if(s[1][0] == s[2][0] && s[1][0] == s[3][0] && s[1][0] == s[4][0]) return true;
	return false;
}
bool fullhouse()
{
	if(s[0][0] == s[1][0] && s[1][0] == s[2][0] && s[3][0] == s[4][0]) return true;
	if(s[0][0] == s[1][0] && s[2][0] == s[3][0] && s[3][0] == s[4][0]) return true;
	return false;
}
bool flush()
{
	for(int i=1;i<5;i++)if(s[i][1]!=s[0][1])return false;
	return true;
}
bool straight()
{
    if(s[0][0] == 'A' && s[1][0] == 'J' && s[2][0] == 'K' && s[3][0] == 'Q' && s[4][0] == 'T') return true;
    int temp[5];
    for(int i=0;i<5;i++)
    {
        if(s[i][0] >= '0' && s[i][0] <= '9') temp[i] = s[i][0] - '0';
        else if(s[i][0] == 'A') temp[i] = 1;
        else if(s[i][0] == 'T') temp[i] = 10;                
        else if(s[i][0] == 'J') temp[i] = 11;                
        else if(s[i][0] == 'Q') temp[i] = 12;                
        else temp[i] = 13;
    }     
    sort(temp, temp + 5);
    int tt = temp[4] - temp[3];
    if(temp[0] == 1 && temp[4] == 13 && temp[3] - temp[2] == tt && temp[2] - temp[1] == tt) return true;
    for(int i = 1; i < 4; i++)
    {
        if(temp[i] - temp[i - 1] != tt)
        {
            return false;
        }
    }
    return true;
}
bool three()
{
    if(s[0][0] == s[1][0] && s[1][0] == s[2][0]) return true;
    if(s[1][0] == s[2][0] && s[2][0] == s[3][0]) return true;
    if(s[2][0] == s[3][0] && s[3][0] == s[4][0]) return true;
    return false;
}
bool twopair()
{
	if(s[0][0] == s[1][0] && s[2][0] == s[3][0]) return true;
    if(s[0][0] == s[1][0] && s[4][0] == s[3][0]) return true;
    if(s[1][0] == s[2][0] && s[3][0] == s[4][0]) return true;
    return false;
}
bool Pair()
{
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(s[i][0]==s[j][0])return true;
		}
	}
	return false;
}

bool straightflush()
{
	return flush() && straight();
	
}
int main()
{
		cin>>t;
	while(t--)
	{
		for(int i=0;i<5;i++)
		{
			cin>>s[i];
		}
		sort(s, s + 5);
		if(royalflush())printf("royal flush\n");
		else if(straightflush()) printf("straight flush\n");
        else if(four()) printf("four of a kind\n");
        else if(fullhouse()) printf("full house\n");
        else if(flush()) printf("flush\n");
        else if(straight()) printf("straight\n");
        else if(three()) printf("three of a kind\n");
        else if(twopair()) printf("two pairs\n");
        else if(Pair()) printf("pair\n");
        else printf("high card\n");
	}
}
