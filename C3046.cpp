#include<stdio.h>
#include<math.h>

int nd( int n){
	int N = n;
	int s = 0;
	int d = 0;
	while( n > 0){	
	int x = n % 10;
		if ( x == 4) return 0;
		s += x;
		d = d * 10 + x;
		n/= 10;
	}
	if(d == N && s % 10 == 0) return 1;
	return 0;
}

int main(){
	int t; scanf("%d", &t);
	while( t--){
		int a; scanf("%d",&a);
		int l = pow(10,(a-1));
		int r = pow(10,a) - 1;
		for( int i = l; i <= r; i++)
			if(nd(i)) 
			printf("%d ", i);
		printf("\n");
	}
}