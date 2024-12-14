#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    if (n<=1) return false;
    float sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; i++) {
        if (n % i==0) {
            return false;
            break;
        }
    }
    return true;
}

int main () {
    int n, m, count;
    cout << "Nhap vao so nguyen duong N: ";
    cin >> n;
    cout << "Nhap vao so nguyen duong M: ";
    cin >> m;

    if (m<=n || n<=500 || m>=100000) {
        cout << "#N/A";
        return 0;
    }

    count = 0;
    for (int j=n; j <= m; j++) {
        if (is_prime(j)) count++;
    }
    cout << "So luong so nguyen to trong khoang tu " << n << " den " << m << ": " << count;
    return 0;
}