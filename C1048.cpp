#include<stdio.h>

int main(){
	int n, sl = 0, sc = 0 ; scanf("%d", &n);
	while(n>0){
		int d = n % 10;
		if(d % 2 == 0) {
			sc++;
		} else sl++;
		n /= 10;
	}
	printf("%d %d", sl, sc);
	return 0;
}