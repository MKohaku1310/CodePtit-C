#include<stdio.h>
#include<math.h>
long long check( long long n){
	if ( n < 2) return 0;
	for( long long i = 2; i <= sqrt(n); i++)
		if( n % i == 0) return 0;
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long a; long long b; int c = 0; scanf("%lld%lld", &a, &b);
	    for(long long i = a; i <= sqrt(b); i++)
			if(check(i)) c++;  
			printf("%d\n",c);    
		}
		
	}