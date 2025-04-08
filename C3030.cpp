# include <stdio.h>
# include <math.h>
int tang (int n){
	int d = n % 10;
	n /= 10;
	while( n > 0){
		if( n % 10 > d)
		return 0;
		d = n % 10;
		n /= 10;
	}
	return 1;
}
int main (){
	int t; scanf ("%d",&t);
	while (t--){
		int n; scanf ("%d",&n);
		int a = pow(10,n-1);
		int b = pow(10,n);
		for (int i=a;i<=b;i++){
			if (tang(i)) printf ("%d ",i);
		}
		printf ("\n");
	}
}