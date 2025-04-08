#include<stdio.h>

int check(int n){
	int N = n, s = 0;
	while(n > 0){
		int c = 1;
		int d = n % 10;
		for(int i = d; i >= 1; i--){
			c *= i;
		}
		s += c;
		n /= 10;
	}
	return s == N;
}
int main(){
	int n; scanf("%d", &n);
	for(int i = 1; i<= n; i++){
		if(check(i))
		printf("%d ", i);
	}
}