#include<stdio.h>
void swap(int *a, int *b){
	int tmp = *a;
	*a = *b; 
	*b = tmp;
}
int main(){
	int n; scanf("%d",&n);
	int a[101];
	int chan[101], sc = 0;
	int le[101], sl = 0;
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
		if(a[i] % 2 == 0)
		chan[sc++] = a[i];
		else le[sl++] = a[i];
  	}
  	for( int i = 0; i < sc; i++){
  		for(int j = i + 1; j < sc; j++)
  			if(chan[j] < chan[i])
  			swap(&chan[i],&chan[j]);
  			printf("%d ", chan[i]);
	  }
	  for(int i = 0; i < sl; i++){
	  	for( int j = i + 1; j < sl; j++)
	  		if(le[j] < le[i])
	  		swap(&le[i],&le[j]);
	  		printf("%d ", le[i]);
	  }
}