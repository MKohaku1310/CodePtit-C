#include <stdio.h>
#include <stdbool.h>

#define MAX 1000

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[MAX + 1] = {0}, b[MAX + 1] = {0}; // M?ng danh d?u
    int x;

    // D?c day `a[]` va danh d?u
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        a[x] = 1;
    }

    // D?c day `b[]` va danh d?u
    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        b[x] = 1;
    }

    // Tim giao A ? B
    bool first = true;
    for (int i = 1; i <= MAX; i++) {
        if (a[i] && b[i]) {
            if (!first) printf(" ");
            printf("%d", i);
            first = false;
        }
    }
    printf("\n");

    // Tim hi?u A - B
    first = true;
    for (int i = 1; i <= MAX; i++) {
        if (a[i] && !b[i]) {
            if (!first) printf(" ");
            printf("%d", i);
            first = false;
        }
    }
    printf("\n");

    // Tim hi?u B - A
    first = true;
    for (int i = 1; i <= MAX; i++) {
        if (b[i] && !a[i]) {
            if (!first) printf(" ");
            printf("%d", i);
            first = false;
        }
    }
    printf("\n");

    return 0;
}
