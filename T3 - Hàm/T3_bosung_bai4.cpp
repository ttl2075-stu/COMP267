#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool is_nguyenduong(int n) {
    if (n > 0) {
        return true;
    } else {
        return false;
    }
}

bool is_vungso(int n) {
    const int a = 1;
    const int b = 100000;
    if (n > a && n < b) {
        return true;
    } else {
        return false;
    }
}

bool is_sohoanchinh (int n) {
    int uoc = 1;
    for (int i = 2; i <= n/2; i++) {
        if ( n % i == 0 ) {
            uoc += i;
        }
    }
    if (n == uoc) {
        return true;
    } else {
        return false;
    }
}

int main () {
    int n;
    cin >> n;
    if (is_nguyenduong(n) && is_vungso(n)) {
        if (is_sohoanchinh(n)) {
            cout << n << " la so hoan chinh";
        } else {
            cout << n << " khong phai la so hoan chinh";
        }
    } else {
        cout << "#N/A";
    }
    
    return 0;

}

