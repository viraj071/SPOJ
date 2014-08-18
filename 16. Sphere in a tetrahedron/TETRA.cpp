#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>

using namespace std;

double surfacearea(double a1,double a2,double a3)
{
        double s=(a1+a2+a3)/2.0;
        return sqrt(s*(s-a1)*(s-a2)*(s-a3));
}


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
		double surface = surfacearea(u,v,W)+surfacearea(v,w,U)+surfacearea(u,V,w)+surfacearea(W,V,U);
		printf("%.4lf\n", 3.0*volume/surface);
	}
	return 0;
}
