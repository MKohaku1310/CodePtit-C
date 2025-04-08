#include<stdio.h>
#include<math.h>
int max( int a, int b){
	if(a>b) return a;
	return b;
}
int nt(int n){
	for(int i = 2; i<= sqrt(n);i++){
		if( n % i == 0) return 0;
	}
	return n > 1;
}
int find(int n){
	int a= -1;
	for( int i = n; i>= 1;i--){
		if(n%i == 0 && nt(i)){
			a = max(a,i);
		}
		return a;
	}
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n; scanf("%d",&n);
		printf("%d\n", find(n));
	}
}