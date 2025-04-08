#include<stdio.h>
#include<math.h>

long long tn(long long n){
	long long m = 0,s = 0; long long a = n;
	while(n>0){
		m = m * 10 + a%10;
		s += m % 10;
		n /= 10;
	} 

	if(s%10!=0) return 1;
	if(m != n) return 1;
	return 0;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		long long n,c=0; scanf("%lld",&n);
		for(long long i = pow(10,n-1); i<=pow(10,n)-1;i++)
			if(tn(i))
			c++;
		
		printf("%d\n", c);
	}
}