#include<stdio.h>
#include<math.h>

long long nd( long long n){
	long long d = 0;
	while(n){
		d = d * 10 + n % 10;
		n /= 10;
	}
	return d;
}
void check( long long n){
	int c2 = 0, c3 = 0, c5 = 0, c7 = 0;
	long long m = nd(n); 
	while(n){
		int r = n%10;
		if(r==2) ++c2;
		else if(r==3) ++c3;
		else if(r ==5) ++c5;
		else if(r==7) ++c7;
		n/= 10;
	}
	while(m){
		 int r = m%10;
		 if(r==2 && c2 != 0){ printf("2 %d\n", c2);c2 = 0;
		 }
		 else if(r==3 && c3 != 0) printf("3 %d\n", c3), c3 = 0;
		 else if(r==5 && c5 != 0) printf("5 %d\n", c5), c5 = 0;
		 else if(r==7 && c7 != 0) printf("7 %d\n", c7), c7 = 0;
		 m /= 10;
	}
}
int main(){
	long long n; scanf("%lld", &n);
	check(n);
}