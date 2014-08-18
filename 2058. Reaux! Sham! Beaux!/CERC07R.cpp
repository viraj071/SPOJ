#include <cstdlib>
#include <map>
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
      map <string, int> m;
      m["Kamen"] = m["Rock"] = m["Pierre"] = m["Stein"] = m["Ko"] = m["Koe"] = m["Sasso"] = m["Roccia"] = m["Guu"] = m["Kamien"] = m["Piedra"] = 1;
      m["Nuzky"] = m["Scissors"] = m["Ciseaux"] = m["Schere"] = m["Ollo"] = m["Olloo"] = m["Forbice"] = m["Choki"] = m["Nozyce"] = m["Tijera"] = 2;
      m["Papir"] = m["Paper"] = m["Feuille"] = m["Papier"] = m["Papir"] = m["Carta"] = m["Rete"] = m["Paa"] = m["Papier"] = m["Papel"] = 3;
      
      string name1,name2,l1,l2,x1,x2;
      int p1,p2,t1,t2,z=1;
      bool bb=false;
      while(1)
      {
			cin>>l1;
			if(l1 == "."||bb)break;
			cin>>name1>>l2>>name2;
			p1=p2=0;
			while(1)
			{
				cin>>x1;
				if(x1==".")
				{
					bb=true;
					break;
				}
				if(x1=="-")break;
				cin>>x2;
				t1=m[x1];
				t2=m[x2];
				if(t1==t2)continue;
				if(t1==1&&t2==2)p1++;
				if(t1==1&&t2==3)p2++;
				if(t1==2&&t2==1)p2++;
				if(t1==2&&t2==3)p1++;
				if(t1==3&&t2==1)p1++;
				if(t1==3&&t2==2)p2++;
			}
			cout << "Game #" << z++ << ":\n" << name1 << ": " << p1;
			if(p1 == 1) printf(" point\n");
            else printf(" points\n");
            cout << name2 << ": " << p2;
            if(p2 == 1) printf(" point\n");
            else printf(" points\n");
            if(p1 == p2) printf("TIED GAME\n\n");
            else
            {
                printf("WINNER: ");
                cout << (p1 > p2 ? name1 : name2) << endl << endl;
            }
	  }
}
