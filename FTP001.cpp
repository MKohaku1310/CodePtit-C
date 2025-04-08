#include<stdio.h>

void matrix( int n){
	int mx[n][n];
	for(int i = 0; i < n; i++){
		for( int j = 0; j < n; j++){
			if( j < i){
				mx[i][j] = 0;
			} else {
				mx[i][j] = j - i;
			}
		}
	}
	for( int i = 0; i < n; i++){
		for( int j = 0;j < n;j++){
			printf("%d ", mx[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int n; scanf("%d",&n);
	if(n>0){
		matrix(n);
	}
	return 0;
}