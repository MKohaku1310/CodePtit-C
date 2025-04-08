#include<stdio.h>
#include<math.h>
int main(){
	int n; scanf("%d", &n);
	int a = n, d = 0;
	int dau, cuoi = n % 10;
	while(a>0){
		if(a<10) dau = a;
		d++;
		a /= 10;
	}
	n = n - cuoi - dau * pow(10, d - 1) + dau + cuoi*pow(10, d - 1);
	printf("%lld",n);
}