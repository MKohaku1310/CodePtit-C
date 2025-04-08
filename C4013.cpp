#include<stdio.h>

int main(){
	int n,a[100], check[10000]={0};
	    scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		check[a[i]]++;
	}
	for(int i = 0; i < n; i++){
	    if(check[a[i]] >= 1) {
	    	printf("%d %d\n", a[i], check[a[i]]);
	    	check[a[i]] = 0;
	    }
		}
	}