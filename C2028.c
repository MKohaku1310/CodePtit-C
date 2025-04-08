#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int dem = n;
    int a = 65;
    int i; 
    for ( i = 1; i <= n; i++)
    {
        int b = a;
        int j; 
        for ( j = 1; j <= dem; j++)
        {
            printf("%c", b);
            b += 2;
        }
        printf("\n");
        dem--;
        a += 2;
    }
}
