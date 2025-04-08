#include<stdio.h>
#include<string.h>

void check(){
	char c[90];
	gets(c);
	int n=0;
	char a[90][90];
	char *token = strtok(c," ");
	while(token != NULL){
		strcpy(a[n++],token);
		token = strtok(NULL," ");
	}
	for(int i=0;i<n;i++){
		if(a[i][0]>='a'&&a[i][0]<='z')
		a[i][0] -= 32;
	for(int j=1;j<strlen(a[i]);j++){
		if(a[i][j]>='A'&&a[i][j]<='Z')
		a[i][j] += 32;
		printf("%s ",a[i]);
	}
	printf("\n");
}
}
int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
        check();
    return 0;
}