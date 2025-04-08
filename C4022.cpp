#include<stdio.h>
#include<limits.h>
int main(){
	int n, a[101],max1= INT_MIN, max2 = INT_MIN; scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if(a[i]> max1)
		max1 = a[i];
	}
	for(int i = 0; i < n; i++){
		if(a[i] == max1)
		continue;
		else{
		if(a[i]>max2)
		max2 = a[i];
	}
	}
	printf("%d %d\n", max1 , max2);
}