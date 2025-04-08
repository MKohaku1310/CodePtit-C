#include<stdio.h>
int min(int m, int n){
	return m < n ? m : n;
}
int main(){
	int a,b; scanf("%d%d",&a ,&b);
	for(int i = a; i >= 1; i--){
		int d = min(i,b);
		for(int j = 1; j <= b; j++){
			if(j <= b - i) printf("%c", 64 + d++);
			else printf("%c", 64 + d);
		}
		printf("\n");
		}
}