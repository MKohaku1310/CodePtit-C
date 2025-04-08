
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	char c1[100];
	gets(c1);
	char c2[100];
	scanf("%s",c2);
	char a[100][100];
	int len = 0;
	char *token = strtok(c1," ");
	while(token != NULL){
		strcpy(a[len++],token);
		token = strtok(NULL," ");
	}
	for(int i = 0; i<len;i++){
		if(strcmp(a[i],c2) != 0)
		printf("%s ", a[i]);
	}
	return 0;
}