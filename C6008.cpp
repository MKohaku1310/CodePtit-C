#include <stdio.h>
#include <string.h>

int main() {
    char a[102][100], b[100];
    int pos = 0;

    // Nh?p chu?i
    while (scanf("%s", b) != EOF) {
        strcpy(a[pos++], b);
    }

    // Xoa chu?i trung l?p
    for (int i = 0; i < pos; i++) {
        for (int j = i + 1; j < pos; j++) {
            if (strcmp(a[j], a[i]) == 0) {
                a[j][0] = '\0'; // Danh d?u chu?i trung l?p la r?ng
            }
        }
    }

    // In ra cac chu?i duy nh?t
    for (int i = 0; i < pos; i++) {
        if (a[i][0] != '\0') {
            printf("%s ", a[i]);
        }
    }

    return 0;
}
