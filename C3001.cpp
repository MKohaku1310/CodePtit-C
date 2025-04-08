#include<stdio.h>

int check(int n){
	int s = 0;
	while(n > 0){
	 s += n % 10;
		n /= 10;
	}
	if ( s % 10 == 0) return 1;
	else return 0;
}
int main(){
	int t; scanf ("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}