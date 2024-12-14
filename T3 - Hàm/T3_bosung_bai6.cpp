#include <bits/stdc++.h>
#include <cmath>
#include <math.h>
using namespace std;

int ucln(int a, int b) {
    while (a*b != 0) {
        if (a>b) {
            a %= b;
        } else {
            b %= a;
        }
    }
    return a+b;
}

int main () {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        cout << "Nhap vao so nguyen thu " << i+1;
        cin >> arr[i];
    }
    
    int uc = ucln(arr[0], arr[1]);
    for (int i = 2; i < 5; i++) {
        uc = ucln(uc, arr[i]);
    }
    cout << "Uoc chung lon nhat cua 5 so: " << uc;
    return 0;
}