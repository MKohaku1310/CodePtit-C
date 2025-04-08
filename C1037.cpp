#include<stdio.h>
int main(){
	int a,b, d = 0; scanf("%d %d", &a, &b);
	for(int i = a; i <= b; i++){
		d += i;
	}
	printf("%d", d);
	return 0;
}