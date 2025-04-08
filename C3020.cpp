#include<stdio.h>

int check(int n){
	int m = 0, f = 0, s = 0, t = n; 
	while(t>0){
		if(t % 10 == 6){
			f = 1;
		}
		m = m*10+t%10;
		s+=t%10;
		t /= 10;
	}
	if(f == 1 && s % 10 == 8 && m ==n) return 1;
	return 0;
}
int main(){
	int a,b; scanf("%d%d",&a,&b);
    if(a>b){
    	int tmp = a;
    	a = b;
    	b = tmp;
	}
	for(int i = a; i<=b;i++){
		if(check(i) == 1) 
		printf("%d ",i);
	}
return 0;
}