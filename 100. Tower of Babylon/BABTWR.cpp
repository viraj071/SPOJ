#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <list>

using namespace std;

struct Box{
	int h,w,d;
};

int compare(const void *a,const void *b){
	return ( (*(Box *)b).d * (*(Box *)b).w ) -
           ( (*(Box *)a).d * (*(Box *)a).w );
}

int maxStackHeight(Box arr[],int n){
	Box rot[6*n];
	int index=0;
	for(int i=0;i<n;i++){
		rot[index]=arr[i];
		index++;
		
		rot[index].h=arr[i].w;
		rot[index].w=arr[i].h;
		rot[index].d=arr[i].d;
		index++;
		
		rot[index].h=arr[i].d;
		rot[index].w=arr[i].w;
		rot[index].d=arr[i].h;
		index++;
		
		rot[index].h=arr[i].d;
		rot[index].w=arr[i].h;
		rot[index].d=arr[i].w;
		index++;
		
		rot[index].h=arr[i].w;
		rot[index].w=arr[i].d;
		rot[index].d=arr[i].h;
		index++;
		
		rot[index].h=arr[i].h;
		rot[index].w=arr[i].d;
		rot[index].d=arr[i].w;
		index++;
	}
	
	n=6*n;
	qsort(rot,n,sizeof(rot[0]),compare);
	
	int msh[n];
	for (int i = 0; i < n; i++ )
      msh[i] = rot[i].h;
      
     for(int i=1;i<n;i++){
		 for(int j=0;j<i;j++){
			if ( rot[i].w < rot[j].w &&
             rot[i].d < rot[j].d &&
             msh[i] < msh[j] + rot[i].h)
				{
					msh[i] = msh[j] + rot[i].h;
				}
		 }
	 }
	 int max = -1;
		for ( int i = 0; i < n; i++ )
			if ( max < msh[i] )
				max = msh[i];
			
   return max;
}

int main(){
	int n;
	while(true){
		scanf("%d",&n);
		if(n==0)break;
		Box arr[n];
		for(int i=0;i<n;i++){
			//int h,w,d;
			scanf("%d%d%d",&arr[i].h,&arr[i].w,&arr[i].d);
		}
		printf("%d\n",maxStackHeight(arr,n));
	}
	return 0;
}
