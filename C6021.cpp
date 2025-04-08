#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int check(char c){
	if(c<'0'||c>'9') return 0;
	if((c-'0')%2!= 0) return 1;
	else return 2;
}
void test(){
	char s[1001]; gets(s);
	int l = strlen(s);
	int ok = 1;
	int le = 0,chan = 0;
	for(int i=0;i<l;i++){
		if(s[0]=='0'||check(s[i])== 0){
			ok = 0;
			break;
		}
		else if(check(s[i])==1) le++;
		else if(check(s[i])==2) chan++;
	}
	if(ok==0) printf("INVALID\n");
	else{
		if((l%2==0)&&chan>le||(l%2!=0)&&le>chan){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
int main(){
	int t; scanf("%d\n",&t);
	while(t--){
		test();
	}
}