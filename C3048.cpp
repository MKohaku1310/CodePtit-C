#include<stdio.h>

void check(){
	long long n; scanf("%lld", &n);
	int s = n % 2;
	int sc = 0, sl = 0;
	while(n > 0){
		int d = n % 10;
		if(d % 2 == 0) sc++;
		else sl++;
		n /= 10;
	}
	if( (sc < sl) && s != 0) printf("YES\n");
	else printf("NO\n");
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		check();
	}
	return 0;
}