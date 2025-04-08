#include<stdio.h>

int main(){
	int n,a[101],check[10005] = {0}; scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
		check[a[i]]++;
	}
	int b[101], nb = 0;
	for(int i = 0; i < n;i++){
		if(check[a[i]] >= 1){
			b[nb++] = a[i];
			check[a[i]] = 0;
		}
	}
	for( int i = 0; i < nb; i++){
		printf("%d ", b[i]);
	}
	
}