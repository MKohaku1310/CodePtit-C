#include <stdio.h>
#include <math.h>

int ktnt(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[101], c = 0;
    int dd[100005] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(ktnt(a[i]) == 1) c++;
    }
    printf("%d ", c);
    for(int i =0; i <n; i++){
    	if(ktnt(a[i]))
    	printf("%d ", a[i]);
	}
    printf("\n");
}
    