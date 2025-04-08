#include<stdio.h>

int main(){
	int n,t; scanf("%d",&n);
	int a[n][n];
	for(int i = 0; i < n; i++){
		for( int j = 0; j < n; j++)
		scanf("%d",&a[i][j]);
	}
	for(int i = 0; i < n; i++){
		t = a[i][i];
		a[i][i] = a[i][n-1-i];
		a[i][n-1-i] = t;
	}
	for(int i = 0; i < n; i++){
		for( int j = 0; j < n; j++)
		printf("%d ",a[i][j]);	
		printf("\n");
	}

}