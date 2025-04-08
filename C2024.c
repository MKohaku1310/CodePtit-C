#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int i; 
    for (i = 0; i < a; i++)
    {
    	int j; 
        for ( j = 0; j < b; j++)
        {
            if (i + j < b)
                printf("%c", i + j + 'A');
            else
                printf("%c", 'A' + b - j - 1);
        }
        printf("\n");
    }
    return 0;
}
