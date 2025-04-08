#include<stdio.h>
#include<math.h>

int main(){
	int T;
	scanf("%d",&T);
	while (T--){
	
    int n;
	scanf("%d",&n);
	int x = sqrt(n);
	if( x * x == n)
	printf("Yes\n");
	else printf ("No\n");
}
	return 0; 
} 
