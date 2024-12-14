#include <bits/stdc++.h>
using namespace std;

float sxn(float x, int n) {
    float kq = 0;
    for (int i = 1; i <= n; i++) {
        kq += pow(x,i);
    }
    return kq;
}

int main () {
    float x;
    int n;
    cout << "Nhap vap so thuc x: ";
    cin >> x;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    cout << fixed << setprecision(6) << sxn(x, n);
    return 0;
}