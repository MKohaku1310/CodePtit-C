#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("@");
    int s = 65;
    int j; 
    for ( j = 2; j <= b; j++)
    {
        printf("%c", s);
        s++;
    }
    printf("\n");
    s = 65;
    int i; 
    for (i = 2; i <= a; i++)
    {
        int d = s;
        for ( j = 1; j <= b; j++)
        {
            if (d >= 65 + (b - 2))
            {
                printf("%c", d);
            }
            else
            {
                printf("%c", d);
                d++;
            }
        }
        printf("\n");
        if (s < 65 + (b - 2))
            s++;
    }
    return 0;
}
