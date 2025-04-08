#include<stdio.h>

int main(){
	int n; scanf("%d",&n);
	for(int i = 1; i <= n;i++){
		char d = 64;
		for( int j = 1; j <= 2*i-1; j++){
			if( j < i) printf("%c",d), (d+=2);
			else printf("%c",d),d -= 2;
		}
		printf("\n");
	}
}