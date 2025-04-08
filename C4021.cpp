#include<stdio.h>

int main(){
	int n,a[101]; scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	int lt; scanf("%d", &lt);
	for(int i = n - lt ; i < n; i++){
		printf("%d ", a[i]);
	}
	for(int i = 0; i < n - lt; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	}