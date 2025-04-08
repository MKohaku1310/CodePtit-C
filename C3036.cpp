#include <stdio.h>

long long reverseNumber(long long n) {
    long long reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int isPalindrome(long long n) {
    return n == reverseNumber(n);
}

int hasOnlyOddDigits(long long n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) return 0; // Có chữ số chẵn
        n /= 10;
    }
    return 1; // Tất cả chữ số đều là lẻ
}

int isSumOfDigitsOdd(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum % 2 != 0; // Tổng là số lẻ
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        if (isPalindrome(n) && hasOnlyOddDigits(n) && isSumOfDigitsOdd(n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
