#include<stdio.h>

int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n,a[101], check[10005]= {0};
		scanf("%d",&n);
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			check[a[i]]++;
		}
		int s = 0;
		for(int i = 0; i < n; i++){
			for(int j = i +1; j < n; j++){
				if(a[i] == a[j]&&check[a[i]] > 1)
		s += (check[a[i]] - 1);	
			check[a[i]] = 0;	
			}	
		}
		printf("%d", s);
		printf("\n");
	}
}