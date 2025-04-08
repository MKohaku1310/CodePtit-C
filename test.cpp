#include <bits/stdc++.h>

using namespace std;

int ngto(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, m;
    cin >> n >> m;

    int a[100][100], b[100][100], c[100][100] = {0}; // C?n khai bao `c` ben ngoai vong l?p

    // Nh?p ma tr?n A
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Thay s? nguyen t? b?ng 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (ngto(a[i][j])) {
                a[i][j] = 0;
            }
        }
    }

    // T?o ma tr?n chuy?n v? B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            b[i][j] = a[j][i]; // Dung: chuy?n v? t? A sang B
        }
    }

    // Nhan ma tr?n A v?i B (n x m) * (m x n) ? (n x n)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) { // Kich thu?c ma tr?n k?t qu? la `n x n`
            for (int k = 0; k < m; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // In k?t qu?
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
