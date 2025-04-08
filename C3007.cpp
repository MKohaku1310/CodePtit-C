#include<stdio.h>
#include<math.h>

int check(int n){
	for( int i = 2; i<= sqrt(n); i++){
		if( n % i == 0)
		return 0;
	}
	return n > 1;
}
int test(int n){
	int d = n;
	int s = 0;
	while( n > 0){
		s = s * 10 + n % 10;
		n /= 10;
	}
	if(s == d) return d;
	return 0;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int a,b; scanf("%d%d", &a, &b);
		int s = 0;
		for(int i = a; i<= b; i++){
			if(check(i) && test(i)){
				s++;
				printf("%d ", i);
				if( s %  10 == 0) printf("\n");	
			}
		}
		printf("\n");
	}
	return 0;
}