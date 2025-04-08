#include<stdio.h>

int check( int n){
	 int d = n % 10;
	 n /= 10; 
	 while( n > 0){
	 	int s = n % 10;
	 	if( s > d) return 0;
	 	d = n % 10;
	 	n /= 10;
	 }
return 1;	
}
void test(){
	int a,b; scanf("%d%d", &a,&b);
	int d = 0;
	for(int i = a; i<= b; i++){
		if(check(i)) d++;
	}
	printf("%d", d);
}
int main(){
	int t; scanf("%d", &t);
	while( t--)
	test();
}