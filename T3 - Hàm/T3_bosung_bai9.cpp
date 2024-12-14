#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// float sinx(int x) {
//     if (x<1) return 0;
//     float kq = x;
//     int giaithua = 1, giaithua_k = 1;
//     for (int i = 2; i <= x; i++) {
//         for (giaithua_k; giaithua_k <= i; giaithua_k++) {
//             giaithua *= giaithua_k;
//         }
//         kq += pow(-1, i-1) * ((float)(pow(x, 2*i - 1)) / (float)(giaithua));
//     }
//     return kq;
// }

int main () {
    int n;
    cout << "Nhap vao so nguyen duong N: ";
    cin >> n;
    cout << fixed << setprecision(3) << sin(n);
    return 0;
}