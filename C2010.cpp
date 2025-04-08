#include<stdio.h>
int min(int m, int n){
	return m < n ? m : n;
}
int main(){
	int a, b; scanf("%d %d", &a, &b);
	for(int i = 1; i <= a; i++){
		printf("%d", i);
		for( int j = 1; j < b; j++){
			if( j <= b-i) {
			printf("%d", i + j);
			}
			else{
				int t = min(i -1,b -1);
				while( j < b) {
				printf("%d", t--);
				++j;
			}
			}	
		}
		printf("\n");
	}
	return 0;
}