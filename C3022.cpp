#include<stdio.h>
#include<math.h>

int nt(int n){
	if( n < 2) return 0;
	for(int i = 2; i<= sqrt(n);i++){
		if( n % i == 0) return 0;
	}
	return 1;
}
int check( int n){
	int s = 0;
	while( n > 0){
		int d = n % 10;
		s += d;
	    n /= 10;
	}	
	if(s % 5 == 0) return 1;
	return 0;
}
int main(){
	int n, c = 0; scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		if(check(i) && nt(i)){
		printf("%d ", i);
		c++;
	}
	
}printf("\n%d", c);
}