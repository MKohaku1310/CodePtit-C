#include<stdio.h>
typedef long long ll;

ll ucln(ll a, ll b){
	while( b > 0){
		ll x =  a % b;
		a = b;
		b = x; 
	}
	return a;
} 
ll bcnn( ll a, ll b){
	return ( a /ucln(a,b) * b);
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n; scanf("%d",&n);
		ll s = 1;
		for( int i = 2; i <= n; i++){
			
			s = bcnn(s,i);
		}
		printf("%lld\n", s);
	}
}