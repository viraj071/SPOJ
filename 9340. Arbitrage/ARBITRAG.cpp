#include <iostream>
#include <queue>
#include <vector>
#include <map>
using namespace std;
int N,M;
map<string, int> nodes;
double v[300][300];
 
int main ()
{
  string a,b,c;
	int i,j;
	double k;
	int cas=1;
	while(1){
		nodes.clear();
		cin >> N;
		if(N==0)
			break;
		for(i=0;i<N;i++){
			cin >> a;
			nodes[a]=i;
		}
		for(i=0;i<N;i++)
			for(j=0;j<N;j++){
				v[i][j]=0.0;
			}
		cin >> M;
		
		for(int z=0;z<M;z++){
			cin >> a >> k >> b;
			i=nodes.find(a)->second;
			j=nodes.find(b)->second;
			v[i][j]=k;
		}
		for(int via=0; via<N;via++)
			for(int f=0;f<N;f++)
				for(int t=0;t<N;t++)
						if(v[f][t] < v[f][via]*v[via][t])
							v[f][t] = v[f][via]*v[via][t];

		for(i=0;i<N;i++)
			if(v[i][i]>1.0)
				break;
		cout << "Case " << cas << ": ";
		if(i==N)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
		cas++;
	}
	return 0;
}
