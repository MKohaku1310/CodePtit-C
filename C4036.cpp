#include<stdio.h>

void check(){
	int n; scanf("%d",&n);
	int a[10] = {1000,500,200,100,50,20,10,5,2,1};
	int c = 0;
	for(int i=0;i<10;i++){
		if(n>=a[i]){
			int d = n / a[i];
			c += d;
			n -= d * a[i];
		}
		if(n==0)
		break;
	}
	printf("%d\n",c);
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		check();
	}
}