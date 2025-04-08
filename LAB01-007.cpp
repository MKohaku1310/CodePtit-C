#include<stdio.h>
#include<math.h>

int main(){
	int n, s = 0; scanf("%d",&n); 
	int a[n];
	for(int i = 0;i < n;i++){
		scanf("%d", &a[i]);
	    s += a[i];
	}
	printf("%.3lf\n", (float) s / n);
}