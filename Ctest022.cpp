#include <stdio.h>
#include <math.h>

int dem_chu_so(long long N) {
    int dem = 0;
    while (N > 0) {
        dem++;
        N /= 10;
    }
    return dem;
}

long long ucln(long long a, long long b) {
    while (b > 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// Ham tinh BCNN c?a hai s?
long long bcnn(long long a, long long b) {
    return (a / ucln(a, b)) * b;
}

// Ham x? ly m?t b? test
void xu_ly_bo_test(long long N) {
    int so_chu_so = dem_chu_so(N);

    // N?u s? ch? s? la l?, in INVALID
    if (so_chu_so % 2 != 0) {
        printf("INVALID\n");
        return;
    }

    // N?u s? ch? s? la ch?n
    int nua = so_chu_so / 2;
    long long phan_chia = pow(10, nua);

    long long phai = N % phan_chia;  // N?a ph?i
    long long trai = N / phan_chia; // N?a trai

    // Tinh b?i s? chung nh? nh?t
    long long ket_qua = bcnn(trai, phai);

    // In k?t qu?
    printf("%lld\n", ket_qua);
}

int main() {
    int T; // S? b? test
    scanf("%d", &T);

    // L?p qua t?ng b? test
    for (int i = 0; i < T; i++) {
        long long N; // S? N co th? l?n t?i 18 ch? s?
        scanf("%lld", &N);

        // G?i ham x? ly b? test
        xu_ly_bo_test(N);
    }

    return 0;
}
