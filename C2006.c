#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
	int i;
    for ( i = 1; i <= a; i++)
    {
    	int j;
        for ( j = b + i - 2; j >= b; j--)
            printf("~");
        for ( j = 1; j <= b; j++)
        {
            if (i == 1 || i == a)
                printf("*");
            else
            {
                if (j == 1 || j == b)
                    printf("*");
                else
                    printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}
