#include<stdio.h>
#include<math.h>
int check( int n){
	for( int i = 2; i <= sqrt(n); i++){
		if( n % i == 0) return 0;
	}
	return 1;
}
int tes(int n){
	while( n > 0){
		int d = n % 10;
		if(d != 2 && d != 3 && d!= 5 && d!=7) return 0;
		n /= 10;
	}
	return 1;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int a,b, c = 0; scanf("%d%d", &a,&b);
		for( int i = a; i <= b; i++){
			if(check(i) && tes(i)) c++;
		}
		printf("%d\n", c);
	}
	return 0;
}