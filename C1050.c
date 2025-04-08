#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int i;
    for (i = 1; i <= b; i++)
    {
    	int j;
        for (j = 1; j <= a; j++)
        {
            if (i == 1 || i == b)
                printf("*");
            else
            {
                if (j == 1 || j == a)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
