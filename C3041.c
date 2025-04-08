#include<stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	while (T--){
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b,&c, &d);
		if( a-c == b -d)
		printf("YES/n");
		else 
		printf("NO/n");
	}
	return 0;
}
