#include<stdio.h>

int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n;i++){
			scanf("%d", &a[i]);
		}
		int sd[n];
		int c = 0;
		int max = -1;
		for(int i = n-1;i>=0;i--){
			if(a[i] > max){
				sd[c++] = a[i];
				max = a[i];
			}
		}
		for(int i = c - 1; i >= 0; i--){
			printf("%d ",sd[i]);
		}
		printf("\n");
	}
	return 0;
}