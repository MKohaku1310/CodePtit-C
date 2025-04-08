#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int s = 65 + (a - 1);
    int i; 
    for ( i = a; i >= 1; i--)
    {
        int d = s;
        if (d > 65 + (b - 1))
        {
            d = 65 + (b - 1);
        }int j; 
        for (j = 1; j <= b; j++)
        {
            if (d == 65 + (b - 1))
            {
                printf("%c", d);
            }
            else
            {
                printf("%c", d);
                d++;
            }
        }
        s--;
        printf("\n");
    }
    return 0;
}
