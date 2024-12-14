#include <bits/stdc++.h>
#include <cmath>
using namespace std;

bool is_sodoixung (int n) {
    int temp = n, doixung = 0, i = 0;
    while (temp != 0) {
        doixung += (temp%10)*pow(10,i);
        temp /= 10;
        i++;
    }
    if (doixung == n) {
        return true;
    } else {
        return false;
    }
}

int tong4so (int n) {
    int n2 = n;
    if (n / 1000 > 0 && n / 1000 < 10) {
        int tong = 0;
        while (n != 0) {
            tong += n % 10;
            n /= 10;
            
        }
        cout << "Tong 4 chu so cua " << n2 << " la: " << tong;
        return 0;
    } else {
        cout << 2;
        return 0;
    }
}

int main() {
    int n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    if (is_sodoixung(n)) {
        cout << n << " la so doi xung" << endl;
        tong4so(n);
    } else {
        cout << n << " khong la so doi xung" << endl;
    }
    return 0;
}