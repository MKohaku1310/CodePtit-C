#include<stdio.h>

void check(){
	int n,m,c = 0; scanf("%d%d",&n,&m);
    for( int i = n; i>= 1; i--){
    	int tmp = i;
		while( tmp % m == 0){
			++c;
			tmp /= m;
		}
	}
	printf("%d\n",c);
}		
int main(){
	int t; scanf("%d",&t);
    while(t--){
    	check();
	}
	return 0;
}