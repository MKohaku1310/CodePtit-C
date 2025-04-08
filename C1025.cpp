#include<stdio.h>
#include<math.h>
int max(int a, int b){
	if(a>b) return a;
	return b;
}
int min(int a,int b){
	if(a<b) return a;
	return b; 
}
int main(){
	int a[4][2];
	int min1 = 100,max1 = -100;
	int min2 = 100,max2=-100;
	for(int i=0;i<4;i++){
		scanf("%d %d",&a[i][0],&a[i][1]);
		min1 = min(min1,a[i][0]);
		max1 = max(max1,a[i][0]);
		min2 = min(min2,a[i][1]);
		max2 = max(max2,a[i][1]);
	
	} 
	 int Max = max(max1-min1,max2-min2);                               
	printf("%d\n", Max * Max);
}