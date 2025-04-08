#include<stdio.h>

int main(){
	int n; scanf("%d",&n);
	for( int i = 1; i <= n;i++){
		int d = i;
		for( int j = 1; j <= i;j++){
			printf("%c ", 64 + d);
			d += (n - j);
		}
		printf("\n");
	}
}