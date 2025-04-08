#include<stdio.h>

int main(){
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++){
		int d = (i % 2 == 0) ?1 : 2;
		for( int j=0;j<=i;j++){
			printf("%d",d);
			d += 2;
		}
		printf("\n");
	}
}