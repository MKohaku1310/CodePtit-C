#include<stdio.h>
#include<string.h>

char a[11]="0123456789";
void check(char c[]){
	int b[1000]={0};
	int n = strlen(c), d = 0;
	for(int i=0;i<n;i++){
		if(c[0]=='0'){
			printf("INVALID\n");
			return;
		}
		if(c[i]<'0'||c[i]>'9'){
			printf("INVALID\n");
			return;
		}
		for(int j=0;j<10;j++){
			if(c[i]==a[j])
			b[j]++;
		}
	}
	for(int i=0;i<10;i++)
		if(b[i]!=0) d++;
		if(d==0) printf("INVALID\n");
		else if(d==10) printf("YES\n");
		else printf("NO\n");
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char a[1005];
        scanf("%s", a);
        check(a);
    }
}