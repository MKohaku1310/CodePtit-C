#include<stdio.h>

int main(){
	int n, d = 0; scanf("%d", &n);
	for(; n > 0; n /= 10){
		d++;
	}
	printf("%d", d);
}