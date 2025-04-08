#include<stdio.h>
#include<math.h>

int check(int n){
	if( n < 2) return 0;
	for( int i = 2; i <= sqrt(n);i++){
		if( n % i == 0) return 0;
	}
	return 1;
}
int main(){
	int m,n; scanf("%d%d",&m,&n);
	int a[20][20];
	for( int i = 0; i < m;i++){
		for( int j = 0; j < n; j++)
		scanf("%d",&a[i][j]);
	}
	for( int i = 0; i < m; i++){
		for( int j = 0; j < n;j++){
			a[i][j] = check(a[i][j]) ? 1 : 0;
	}
}
for(int i = 0; i < m; i++){
	for( int j = 0; j < n; j++){
		printf("%d ",a[i][j]);
	}
	printf("\n");
}
}
