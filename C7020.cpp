#include<stdio.h>
#include<string.h>

struct Poke{
	char ten[1000];
	int da,so_da;
	int cnt;
};
typedef struct Poke p;
int main(){
	int n,sum=0,max=0;
	scanf("%d",&n);
	p a[n+1];
	
	for(int i=0;i<n;i++){
	a[i].cnt = 0; 
		scanf("%s",&a[i].ten);
		scanf("%d %d",&a[i].da,&a[i].so_da);
		while(a[i].da<=a[i].so_da){
			a[i].so_da-=a[i].da;
			a[i].so_da += 2;
			a[i].cnt++;
		}
		sum += a[i].cnt;
	}
	printf("%d\n",sum);
	for(int i=0;i<n;i++)
	if(a[i].cnt>max) max = a[i].cnt;
	for(int i=0;i<n;i++){
		if(a[i].cnt == max){
			printf("%s",a[i].ten);
			break;
		}
	}
}