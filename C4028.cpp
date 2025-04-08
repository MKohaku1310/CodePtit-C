#include<stdio.h>

void swap(int *a,int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void checkA(int a[101],int n){
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]) swap(&a[i],&a[j]);
		}
	}
}
void checkB(int b[101],int n){
	for(int i=0;i<n;i++) scanf("%d",&b[i]);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(b[j]>b[i]) swap(&b[i],&b[j]);
		}
	}
}
int main(){
	int t; scanf("%d",&t);
	for(int s = 1;s<=t;s++){
		int n; scanf("%d",&n);
		int a[101],b[101];
		checkA(a,n);
		checkB(b,n);
		printf("Test %d:\n",s);
		for(int i=0;i<n;i++){
			printf("%d %d ",a[i],b[i]);
		}
		printf("\n");
		}
	}