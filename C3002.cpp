#include<stdio.h>
#include<math.h>
bool check(int n){
	if ( n <= 1) return 0;
	for(int i = 2; i <= sqrt(n); i++)
		if( n % i == 0)
		return 0;
	return 1;
}
int main(){
	int n; scanf("%d",&n);
	for( int i = 2; i <= n; i++){
		if(check(i)) printf("%d\n",i);	
	}
	return 0;
}