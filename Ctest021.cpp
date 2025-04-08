#include<stdio.h>
#include<math.h>

int check( int n ){
	if( n < 2) return 0;
	for( int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n; scanf("%d",&n);
		int a[1002], b[10005] = {0};
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			if(check(a[i])){
				b[a[i]] = 1;
			}
		}
		for( int i = 2; i < 1000; i++){
			if(b[i]){
				printf("%d ", i);
			}
		}
		printf("\n");
	}
}