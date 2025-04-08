#include<stdio.h>
#include<string.h>

struct thukhoa{
	int id;
	char ten[100];
	char ngay_sinh[100];
	double diem1;
	double diem2;
	double diem3;
	double sum;
};
int main(){
	int n; scanf("%d",&n);
	double max = 0;
	struct thukhoa a[n+1];
	for(int i=1;i<=n;i++){
		scanf("\n");
		a[i].id = i;
		gets(a[i].ten);
		gets(a[i].ngay_sinh);
		scanf("%lf%lf%lf",&a[i].diem1,&a[i].diem2,&a[i].diem3);
		a[i].sum = a[i].diem1+a[i].diem2+a[i].diem3;
		if(max<a[i].sum)
		max = a[i].sum;
	}
	for(int i=1;i<=n;i++){
		if(a[i].sum==max)
		printf("%d %s %s %.1lf\n",a[i].id,a[i].ten,a[i].ngay_sinh,a[i].sum);
	}
}