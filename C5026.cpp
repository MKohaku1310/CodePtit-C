#include<stdio.h>
#include<math.h>

int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main(){
	int n; scanf("%d",&n);
	int arr[30][30];
	int cnt, hang = 0, max = 0;
	for(int i=0;i<n;i++){
		cnt = 0;
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
			if(nt(arr[i][j]))
			cnt++;
		}
		if(cnt>max){
			max = cnt;
			hang = i;
		}
	}
	printf("%d\n",hang+1);
	for(int i=0;i<n;i++){
	if(nt(arr[hang][i]))
	printf("%d ",arr[hang][i]);
}
}