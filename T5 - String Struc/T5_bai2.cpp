#include <bits/stdc++.h>
#include <cmath>
#include <string>
using namespace std;

bool is_sochinhphuong (long long int n) {
    if (n < 0) return false;
    long long int temp = sqrt(n);
    return temp*temp == n;
}

bool is_songuyento (long long int n) {
    if (n <= 1) {
        return false;
    } else {
        for (long int i = 2; i <= sqrt(n); i++) {
            if (n%i == 0) {
                return false;
            }
        }
        return true;
    }
}

bool is_sodoixung (long long int n) {
    string ss = "", temp ="";
    ss = to_string(n);
    temp = ss;
    reverse(temp.begin(), temp.end());
    return temp == ss;
}

int main () {
    long long int n;
    string s;
    cout << "Nhap vao so N: ";
    cin >> n;
    s = to_string(n);
    cout << "So n co " << s.length() << " chu so" << endl;
    cout << "So n la so chinh phuong " << (is_sochinhphuong(n) ? "Yes" : "No") << endl;
    cout << "So n la so nguyen to " << (is_songuyento(n) ? "Yes" : "No")  << endl;
    cout << "So n la so doi xung " << (is_sodoixung(n) ? "Yes" : "No")  << endl;
    return 0;
}