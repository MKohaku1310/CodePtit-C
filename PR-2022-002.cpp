#include<stdio.h>
#include<math.h>

int ngto(int n){
	if(n<2) return 0;
	for(int i =2; i<=sqrt(n);i++){
		if(n%i==0) return 0; 
	}
	return 1;
}
int dao(int n){
	int a = n, dem = 0;
    int dau, cuoi = n % 10;
    while (a > 0)
    {
        if (a < 10)
            dau = a;
        dem++;
        a /= 10;
    }
    n = n - cuoi - dau * pow(10, dem - 1) + dau + cuoi * pow(10, dem - 1);
    return n;
}
int main(){
	int n; scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(ngto(a[i])&&ngto(dao(a[i]))){
			printf("1 ");
		} else printf("0 ");
	}
}