#include<stdio.h>
#include<limits.h>
int main(){
	int n,a[100],min1 = INT_MAX,min2=INT_MAX; scanf("%d", &n);
	for( int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	 if(a[i] < min1) min1 = a[i];
		}
		for( int i = 0; i < n; i++){
			if(a[i] == min1)
			continue;
			else{
				if(a[i], min2)
				min2 = a[i]; 
			}
		}printf("%d %d",min1, min2);
			printf("\n");
}   