#include<stdio.h>
#include<math.h>
int check(int n){
	int s = 1;
	for(int i = 2; i<= sqrt(n); i++){
		if( n % i == 0)
		s = s + i + n / i;
	}
	return s;
}
int main(){
	int n; scanf("%d", &n);
	for(int i = 2; i <= n; i++){
		if(check(i) == i)
		printf("%d ", i);
	}
	return 0;
}