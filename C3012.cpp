#include<stdio.h>

int fibo(int n){
	if(n == 0 || n == 1) return 1;
	int f1 = 0, f2 = 1, fn = 1;
	while(fn < n){
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
	}
	return fn == n;
}

int main(){
	int n, f1 = 0, f2 = 1; 
	scanf("%d", &n);
	int c = n - 1;
	if(c > 0){
		for(int i = 0; c > 0; i++){
			if ( i == 1) printf("%d ", f2);
			if (fibo(i)){
				printf("%d ", i);
				c--;
			}
		}
	}
	return 0;
}
