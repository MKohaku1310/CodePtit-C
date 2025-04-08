#include<stdio.h>
void check(){
	long long fibo[93];
	fibo[1] = 1, fibo[2] = 1;
	for(int i = 3; i <= 92; i++){
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	int a,b; scanf("%d%d", &a,&b);
	for( int i = a; i <= b; i++){
		printf("%lld", fibo[i]);
		if(i<b){
			printf(" ");
		}
	}
	printf("\n");
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		check();
	}
}