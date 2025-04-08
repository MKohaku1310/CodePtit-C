#include<stdio.h>
long long test( long long n,int d){
	long long r = 0, N = n;
	n /= 10;
	for(int i = 0; i < d - 2; i++){
		r = r * 10 + n % 10;
		n /= 10;
	}
	return r == n;
}
 long long check(long long n){
 	int sc = n % 10;
 	int sd; int d = 0;
 	long long N = n;
 	while(N>0){
 		sd = N;
 		N /= 10;
 		d++;
	 }
	 if((sd == 2 * sc || sd * 2 == sc)){
	 	return 1;
	 }
	 return test(n,d);
 }
 int main(){
 	int t; scanf("%d", &t);
 	while(t--){
 		long long n; scanf("%lld", &n);
 		if(check(n)) printf("YES\n");
 		else printf("NO\n");
	 }
 }