#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>

using namespace std;

int main(){
	int t=0;
	scanf("%d",&t);
	double U,V,W,u,v,w;
	while(t--){
		scanf("%lf%lf%lf%lf%lf%lf",&u,&W,&V,&v,&w,&U);
		double uu = (v*v) + (w*w) - (U*U);
		double vv = (w*w) + (u*u) - (V*V);
		double ww = (u*u) + (v*v) - (W*W);
		double vol = (4*u*u*v*v*w*w)-(u*u*uu*uu)-(v*v*vv*vv)-(w*w*ww*ww)+(uu*vv*ww);
		double volume = (sqrt(vol)) / 12;
		printf("%.4lf\n", volume);
	}
	return 0;
}
