#include<stdio.h>
void swap(int *a, int *b){
	int tem = *a;
	*a = *b;
	*b = tem;
}
int main(){
	int n, a[101]; scanf("%d",&n);
	for(int i=0; i< n;i++){
		scanf("%d",&a[i]);
	}
	for( int i = 0; i < n-1; i++){
		for( int j = i + 1; j < n; j++){
		if(a[j] > a[i]){
			swap(&a[j],&a[i]);
	}
}
}
	for(int k = 0; k < n; k++){
		printf("%d ", a[k]);
	}
	printf("\n");
}