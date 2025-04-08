#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int check(char a[]){
	int n = strlen(a);
	for(int i=0;i<=(n-1)/2;i++)
	if(a[i] != a[n-1-i] || a[i]=='1'||a[i]=='4'||a[i]=='6'||a[i]=='8'||a[i]=='9')
	return 0;
	return 1;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		char c[1000];
		scanf("%s",c);
		if(check(c))
		printf("YES\n");
		else printf("NO\n");
	}
}