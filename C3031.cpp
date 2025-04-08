#include<stdio.h>

int ucln( int m, int  n){
	while( n > 0){
		int x = m % n;
		m = n; n = x;
	}
	return m;
}
int main(){
	int t; scanf("%d",&t);
	while( t-- ){
	int a,b,c,d; scanf("%d%d%d%d", &a, &b, &c,&d);
    if( ucln (a,b) == ucln(c,d)) printf("YES\n");
    else printf("NO\n");
	}
	return 0;
}