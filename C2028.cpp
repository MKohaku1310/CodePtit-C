#include<stdio.h>
int min(int a, int b){
	return a < b ? a : b;
}
int main(){
	int n; scanf("%d",&n);
	for(int i = 1; i <= n ; i++){
		int d = 2 * i - 1;
		for(int j = 1; j <= n - i + 1; j++){
			printf("%c", 64 + d);
			d += 2;
		}
		printf("\n");
	}
}