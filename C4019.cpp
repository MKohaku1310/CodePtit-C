#include<stdio.h>

void check(){
	int n; scanf("%d",&n);
	int a[101];
	int dd[30001] = {0}, c = 0;
	for(int i = 0;i < n; i++){
		scanf("%d",&a[i]);
		dd[a[i]]++;
		if(dd[a[i]] > c)
		c = dd[a[i]];
	}
	for(int i = 0; i < n; i++){
		if(dd[a[i]] == c){
			printf("%d ", a[i]);
			dd[a[i]] = 0;
		}
	}
	printf("\n");
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		check();
	}
	return 0;
}