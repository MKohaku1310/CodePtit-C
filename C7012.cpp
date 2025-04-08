#include<stdio.h>
#include<string.h>

struct hang{
	int id;
	char ten[100];
	char loai[100];
	double gia_mua;
	double gia_ban;
	double lai;
};
int cmp(struct hang a,struct hang b){
	if(a.lai < b.lai) return 1;
	return 0;
}
void swap(struct hang *a,struct hang *b){
	struct hang c = *a;
	*a = *b;
	*b = c;
}
int main(){
	int n; scanf("%d",&n);
	struct hang a[n+1];
	for(int i=1;i<=n;i++){
		scanf("\n");
		a[i].id=i;
		gets(a[i].ten);
		gets(a[i].loai);
		scanf("%lf %lf",&a[i].gia_mua,&a[i].gia_ban);
		a[i].lai = a[i].gia_ban-a[i].gia_mua;
	}
	for(int i=1;i<=n;i++)
		for(int j =i+1;j<=n;j++)
			if(cmp(a[i],a[j]))
			swap(&a[i],&a[j]);
			for(int i=1;i<=n;i++){
				printf("%d %s %s %.2lf\n",a[i].id,a[i].ten,a[i].loai,a[i].lai);
	}
}