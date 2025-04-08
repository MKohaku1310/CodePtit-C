#include<stdio.h>

int check(int n){
	int f = 0, m = 0, tmp = n;
	while( tmp > 0){
		if(tmp % 10 == 9){
			f = 1;
		}
		m = m * 10 + tmp % 10; 
	    tmp /= 10;
	}
    if(n == m && f == 0) return 1;
    return 0;
}
int main(){
	int n, c= 0; scanf("%d",&n);
	for( int i = 2; i <= n;i++){
		if(check(i) == 1){
		printf("%d ", i);
		c++;
	}
}
	printf("\n%d", c);
}