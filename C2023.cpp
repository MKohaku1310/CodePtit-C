#include<stdio.h>

int main(){
	int a,b; scanf("%d%d", &a,&b);
	for(int i = 1; i<= a; i++){
		int d = i;
		for(int j = 1; j <= b; j++){
			if(j <= b - i) printf("%c", 64 + d++);
			else printf("%c", 64 + (d-1)--);
		}
		printf("\n");
	}
}