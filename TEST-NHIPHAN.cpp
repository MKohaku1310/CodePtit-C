#include<stdio.h>

int main(){
	int n, c = 0, a[101]; scanf("%d",&n);
	if( n == 0){
		printf("0");
		return 0;
	}
	while(n!=0){
		if( n % 2 == 0){
			a[c++] = 0;
		}
		else a[c++] = 1;
		n /= 2;
	}
	for(int i = c - 1; i >= 0; i--){
		printf("%d",a[i]);
	}
}