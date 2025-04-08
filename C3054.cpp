#include<stdio.h>
#include<math.h>

long long check( long long n){
	long long a = n;
	long long s;
	while( n > 0){
		s = n;
		n /= 10;
	}
	int d = a % 10;
	if( s % d == 2 || d % s == 2)
	return 0;
	return 1;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
}