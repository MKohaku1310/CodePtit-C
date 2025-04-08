#include<stdio.h>
long long max(long long a, long long b){
	if(a>b)
	return a;
	return b;
}
void check(){
	int n; scanf("%d",&n); 
	long long a[n];
	long long s = 0, Max = 0;
	for(int i=0;i<n;i++){
     scanf("%lld",&a[i]);
     s += a[i];
     if(s<0) s = 0;
     Max = max(Max,s);
	 }
	 printf("%lld\n", Max);
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		check();
	}
}