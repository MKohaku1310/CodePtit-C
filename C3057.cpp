#include<stdio.h>
typedef long long ll;

ll cmin(ll n){
	ll s = 0,  b = 1;
	while( n >0){
		int d = n % 10;
		if( d == 6){
			d = 5; 
		}
		s += d * b;
		b *= 10;
		n /= 10;
	}
	return s;
}
ll cmax(ll n){
	ll s = 0, b = 1;
	while( n > 0){
		int d = n % 10;
		if( d == 5){
			d = 6;
		}
		s += d * b;
		b *= 10;
		n /= 10;
	}
	return s;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		ll x1,x2; scanf("%lld%lld", &x1,&x2);
		ll minx1 = cmin(x1);
		ll minx2 = cmin(x2);
		ll maxx1 = cmax(x1);
		ll maxx2 = cmax(x2);
		printf("%lld %lld\n", minx1 + minx2, maxx1+maxx2);
	}
}