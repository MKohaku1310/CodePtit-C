#include<stdio.h>

int gt(int n){
	int d = 1;
	for( int i = n; i>= 1;  i--)
	d *= i;
	return d;
}
int check( int n, int k){
	return gt(n) / ( gt(k) * gt(n - k));
}
int main(){
	int n; scanf("%d", &n);
	for( int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			printf("%d ",check(i,j));	
		}
		printf("\n");
	}
	
	return 0;
}