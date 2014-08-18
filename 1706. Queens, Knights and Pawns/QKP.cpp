#include <cstdlib>
#include <iostream>
#include <cstdio>

using namespace std;
char a[1000][1000];
int m, n;

void knight(int x, int y)
{
    int i, j, k;
    i = x - 2; j = y - 1; k = y + 1;
    if(i >= 0)
    {
         if(j >= 0)
            if(a[i][j] == '0')
                a[i][j] = 'x';
        if(k < m)
            if(a[i][k] == '0')
                a[i][k] = 'x';
    }
    i++; j--; k++;
    if(i >= 0)
    {
         if(j >= 0)
            if(a[i][j] == '0')
                a[i][j] = 'x';
        if(k < m)
            if(a[i][k] == '0')
                a[i][k] = 'x';
    }
    i += 2;
    if(i < n)
    {
         if(j >= 0)
            if(a[i][j] == '0')
                a[i][j] = 'x';
        if(k < m)
            if(a[i][k] == '0')
                a[i][k] = 'x';
    }
    i++; j++; k--;
    if(i < n)
    {
         if(j >= 0)
            if(a[i][j] == '0')
                a[i][j] = 'x';
        if(k < m)
            if(a[i][k] == '0')
                a[i][k] = 'x';
    }
}

void queen(int x, int y)
{
    int i, j;
    i = y - 1; j = x - 1; 
    while(i >= 0 && (a[x][i] == '0' || a[x][i] == 'x'))
        a[x][i--] = 'x';
    while(j >= 0 && (a[j][y] == '0' || a[j][y] == 'x'))
        a[j--][y] = 'x';
    i = y + 1; j = x + 1; 
    while(i < m && (a[x][i] == '0' || a[x][i] == 'x'))
        a[x][i++] = 'x';
    while(j < n && (a[j][y] == '0' || a[j][y] == 'x'))
        a[j++][y] = 'x';
    i = y + 1; j = x + 1; 
    while((i < m && j < n) && (a[j][i] == '0' || a[j][i] == 'x'))
        a[j++][i++] = 'x';
    i = y - 1; j = x - 1; 
    while((i >= 0 && j >= 0) && (a[j][i] == '0' || a[j][i] == 'x'))
        a[j--][i--] = 'x';
    i = y - 1; j = x + 1;
    while((i >= 0 && j < n) && (a[j][i] == '0' || a[j][i] == 'x'))
        a[j++][i--] = 'x';
    i = y + 1; j = x - 1;
    while((i < m && j >= 0) && (a[j][i] == '0' || a[j][i] == 'x'))
        a[j--][i++] = 'x';
}

main()
{
    int k, q, p, r, c, z = 0, w = 1;
    for(int i = 0; i < 1000; i++)
        for(int j = 0; j < 1000; j++)
            a[i][j] = '0';
    while(1)
    {
        z = 0;
        scanf("%d%d", &n, &m);
        if(n == 0 && m == 0) break;
        
        
        scanf("%d", &q);
        for(int i = 0; i < q; i++)
        {
            scanf("%d%d", &r, &c);
            a[r - 1][c - 1] = 'q';
        }
        
        scanf("%d", &k);
        for(int i = 0; i < k; i++)
        {
            scanf("%d%d", &r, &c);
            a[r - 1][c - 1] = 'k';
        }
        
        scanf("%d", &p);
        for(int i = 0; i < p; i++)
        {
            scanf("%d%d", &r, &c);
            a[r - 1][c - 1] = 'p';
        }
        
        /*for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
                printf("%c ", a[i][j]);
            printf("\n");
        }
        printf("\n\n");*/
        
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
            {
                if(a[i][j] == 'k')
                    knight(i, j);
                else if(a[i][j] == 'q')
                    queen(i, j);
            }
        
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                //printf("%c ", a[i][j]);
                if(a[i][j] == '0') z++;
            }
            //printf("\n");
        }
        printf("Board %d has %d safe squares.\n", w++, z);
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                a[i][j] = '0';
    }
}
