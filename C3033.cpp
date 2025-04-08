#include<stdio.h>
#include<math.h>
void check(){
	int n; scanf("%d", &n);
	printf("%d = ", n);
	for( int i = 2; i <= sqrt(n); i++){
		if( n % i == 0){
			int c = 0;
			while( n % i == 0){
			    c++;
				n /= i;
			}
			printf("%d^%d",i,c);
			if( n != 1)
		    printf("*");
		}
		}
	if( n != 1) printf("%d^1",n);	
	printf("\n");
	}
	
int main(){
	int t; scanf("%d", &t);
	while(t--)
		check();
	}