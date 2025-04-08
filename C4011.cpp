#include<stdio.h>

int check(int a[55], int i){
	for( int j = i; j >= 0; j--)
	if(a[i] < a [j])
	return 0;
	return 1;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n, a[55]; scanf("%d",&n);
		for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
		int d = 0;
		for( int i = 0; i < n; i++)
		if(check(a,i)) d++;
		printf("%d\n", d);
	}
}
