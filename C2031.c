#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s = 65 + n - 2;
    int dem = n;
    int i; 
    for (i = n; i >= 2; i--)
    {
        int d = s;
        int j; 
        for ( j = 1; j <= dem; j++)
        {
            printf("%c", d);
            d++;
        }
        dem--;
        s--;
        printf("\n");
    }
    printf("@");
    return 0;
}
