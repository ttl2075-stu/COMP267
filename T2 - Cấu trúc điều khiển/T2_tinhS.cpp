#include <bits/stdc++.h>
using namespace std;

// Tính giá trị biểu thức S = 1/(1) + 1/(1+2) + 1/(1+2+3) + ... + 1/(1+2+3+...+n) 
// Sau dấu thập phân 2 chữ số

double calculateS(int n) {
    double S = 0.0;
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
        S += 1.0 / sum;
    }
    return S;
}

int main () {
    int n;
    cin >> n;
    cout << fixed << setprecision(2) << calculateS(n);
    return 0;
}