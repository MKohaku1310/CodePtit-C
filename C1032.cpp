#include<stdio.h>
#include<math.h>
int check(int n){
	int d = 1;
	for( int i = 2; i <= sqrt(n);i++){
		if(n%i==0){
			d *= i;
			while(n%i==0) n/= i;
			if(n==i) return d;
		}
	}
	return d * n;
}
int main(){
int t; scanf("%d",&t);
while(t--){
	int n; scanf("%d",&n);
	printf("%d\n", check(n));
}
}