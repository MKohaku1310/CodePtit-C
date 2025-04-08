#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t); // D?c s? b? test
    for (int test = 0; test < t; test++) {
        int N;
        scanf("%d", &N); // D?c s? ph?n t? c?a day
        int arr[100]; // Khai bao m?ng v?i t?i da 100 ph?n t?
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]); // D?c cac ph?n t? vao m?ng
        }
        for (int i = 0; i < N; i++) {
            if (isPrime(arr[i])) {
                printf("%d ", arr[i]); // In cac s? nguyen t? trong m?ng
            }
        }
        printf("\n"); // Xu?ng dong sau m?i b? test
    }
    return 0;
}

