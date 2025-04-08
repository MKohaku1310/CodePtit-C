#include<stdio.h>

void swap(int *a, int *b){
	int tmp = *a;
    *a = *b;
    *b = tmp;
}
void check(int a[],int n, char c){
	for(int i = 0; i < n-1;i++){
		for(int j = i + 1; j < n;j++){
			if((c == 'T') && a[i]>a[j] || ( c == 'G'&&a[i]<a[j])){
				swap(&a[i],&a[j]);
			}
		}
	}
}
void test(){
	int x,y; scanf("%d%d",&x,&y);
	char c; scanf(" %c",&c);
	int a[101],b[101];
	for( int i = 0; i < x; i++) scanf("%d",&a[i]);
	for(int i = 0;i<y;i++) scanf("%d",&b[i]);
	if(c == 'F'){
		for(int i=0; i < x;i++) printf("%d ",a[i]);
		for(int i=0;i<y;i++) printf("%d ",b[i]);
		printf("\n");
	} else if( c == 'A'){
		for(int i = 0; i<y;i++) printf("%d ",b[i]);
		for(int i=0;i<x;i++) printf("%d ",a[i]);
		printf("\n");
	} else{
		int ma[202];
		for(int i = 0; i < x;i++) ma[i] = a[i];
		for(int i=0;i<y;i++)  ma[x + i] = b[i];
		check(ma,x+y,c);
		for(int i =0;i < x + y; i++){
			printf("%d ",ma[i]);
		}
		printf("\n");
	}
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		test();
	}
}