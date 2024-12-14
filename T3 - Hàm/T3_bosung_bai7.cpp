#include <bits/stdc++.h>
using namespace std;

bool is_vungdieukien(int n) {
    const int a = 1, b = 10000;
    if (n > a && n < b) {
        return true;
    } else {
        return false;
    }
}

int tong_n(int n, int sum = 0) {
    if (n != 0) {
        sum += n;
        n--;
        return tong_n(n, sum);
    } else {
        return sum;
    }
}

int main () {
    int n;
    cout << "Nhap vao so nguyen n (1 < n < 10 000): ";
    cin >> n;
    if (is_vungdieukien(n)) {
        cout << "Tong cac so tu 1 den " << n << " la: " << tong_n(n, 0) << endl;
    } else {
        cout << "#N/A";
    }
    return 0;
}