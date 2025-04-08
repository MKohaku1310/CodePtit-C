#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void test(){
	char a[501];
	scanf("%s",a);
	int l = strlen(a);
	bool check = 1;
	for(int i = 0,j = l-1; i<=(l/2 -1);i++,j--){
		if(a[i]!= a[j] || a[i] % 2 != 0){
			check = 0;
			break;
		}
	}
	if(l%2 != 0 && a[l/2] % 2 != 0)
	check = 0;
	if(check)
	printf("YES\n");
	else printf("NO\n");
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		test();
	}
}