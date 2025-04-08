#include<stdio.h>
#include<math.h>

int check( int n){
	int c = 0;
	for( int i = 1; i <= sqrt(n); i++){
		if( n % i == 0){
			if ( i % 2 == 0) c++;
			int d = n / i;
			if ( d != i && d % 2 == 0) c++;
		}
	}
	return c;
}
int main(){
	int t; scanf("%d", &t);
	while( t--){
		int n; scanf("%d",&n);
			printf("%d\n", check(n));
	}
	return 0;
}