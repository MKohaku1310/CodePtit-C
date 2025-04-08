#include <stdio.h>

int factorial(int n)
{
    int f = 1;
    int i; 
    for ( i = n; i >= 1; i--)
        f *= i;
    return f;
}

int pascal(int n, int k)
{
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main()
{
    int n;
    scanf("%d", &n);
    int i; 
    for ( i = 0; i < n; i++)
    {
    	int j; 
        for ( j = 0; j <= i; j++)
            printf("%d ", pascal(i, j));
        printf("\n");
    }
    return 0;
}
