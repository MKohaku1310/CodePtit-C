#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	char c[1005];
	gets(c);
	int scc = 0, scs = 0;
	for( int i = 0; i < strlen(c);i++){
		if( isalpha(c[i])) scc++;
		else if (isdigit(c[i])) scs++;
	}
	printf("%d %d %d\n", scc,scs, strlen(c) - scc - scs);
}