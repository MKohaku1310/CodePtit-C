#include<stdio.h>
#include<math.h>

int check(int n){
	int s = 0;
	for( int i = 2; i <= sqrt(n); i++){
		while( n % i == 0){
			s += i;
			n /= i;	
		}
	
}	if( n > 1){
	s += n;
		
	}
	
	return s;
}
int main(){
	int t; scanf("%d",&t);
	long long d = 0;
	while(t--){
		int n; scanf("%d",&n);
		d += check(n);
	}
	printf("%lld\n", d);
	return 0;
}