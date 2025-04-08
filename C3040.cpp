#include<stdio.h>
#include<math.h>
#include<stdbool.h>
typedef long long ll;

ll tong(ll n){
	ll s = 0;
	while( n > 0){
		s += n % 10;
		n /= 10;
	}
	return s;
}
ll tongnt( ll n){
	ll s = 0;
	for( ll i = 2; i <= sqrt(n); i++){
		while( n % i == 0){
			s += tong(i); 
			n /= i;
		}
	}
	if (n == 1) return s;
	return s + tong(n);
}
int main(){
	ll n; scanf("%lld", &n);
	if(tongnt(n) == tong(n)) printf("YES\n");
	else printf("NO\n");
}
	