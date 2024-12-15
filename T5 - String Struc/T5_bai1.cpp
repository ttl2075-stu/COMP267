#include <bits/stdc++.h>
using namespace std;

bool is_namnhuan(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        return true;
    } else {
        return false;
    }
}


int main () {
    int m, y, d;
    cout << "Nhap vao Thang: ";
    cin >> m;
    cout << "Nhap vao Nam: ";
    cin >> y;
    if (m == 2) {
        if (is_namnhuan(y)) {
            d = 29;
        } else {
            d = 28;
        }
    } else if (m == 1 || m == 3 || m==5 || m == 7 || m == 8 || m == 10 || m == 12) {
        d = 31;
    } else { 
        d = 30;
    }
    cout << "Thang " << m << " nam " << y << " co " << d << " ngay." << endl;
    return 0;
}