#include<stdio.h>
#include<string.h>

int tn(char s[]){
	int l = strlen(s);
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-1-i])
		return 0;
	}
	return 1;
}
int max(int a, int b){
	if(a>b)
	return a;
	return b;
}
int main(){
	char s[1005];
	int Max = 0;
	int n=0;
	char a[1005][1005];
	int  b[1005]={0};
	while(scanf("%s ",s) != -1){
		if(tn(s)){
			Max=max(Max,strlen(s));
			int xh = -1;
			for(int i=0;i<n;i++)
			if(strcmp(a[i],s)==0){
				xh = i;
				break;
			}
			if(xh != -1) b[xh]++;
			else{
				strcpy(a[n],s);
				b[n]=1;
				n++;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(strlen(a[i])==Max)
		printf("%s %d\n",a[i],b[i]);
	}
}