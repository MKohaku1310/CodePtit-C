#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    char c;
    if (a >= b)
        c = 96 + a;
    else
        c = 96 + b;
        int i; 
    for ( i = 0; i < a; i++)
    {
    	int j; 
        for ( j = 0; j <= i && j < b; j++)
            printf("%c", c - j);
        for (j = i + 1; j < b; j++)
            printf("%c", c - i);
        printf("\n");
    }
    return 0;
}
