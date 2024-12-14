#include <bits/stdc++.h>
#include <string> // Để thực hiện hàm stoi và stol
using namespace std;

// string convert_dec2bin(int n) {
//     int temp = n;
//     string bin = "";
//     while (temp != 0) {
//         bin += to_string(temp%2);
//         temp /= 2;
//     }
//     return bin;
// }

bool is_bin(string s) {
    for (char c : s) {
        if (c != '0' && c != '1') {
            return false;
        }
    }
    return true;
}

long long int convert_bin2dec(string s) {
    return stoll(s,nullptr,2); // Hàm chuyển từ xâu nhị phân sang số thập phân
}

int main () {
    string dec1, dec2;
    cout << "Nhap vao xau nhi phan 1: ";
    getline(cin, dec1);
    cout << "Nhap vao xau nhi phan 2: ";
    getline(cin, dec2);
    if (is_bin(dec1) && is_bin(dec2)) {
        cout << "Tong cua 2 xau nhi phan theo dang so thap phan la: " << convert_bin2dec(dec1)+convert_bin2dec(dec2) << endl;
    } else {
        cout << "#N/A";
    }
    return 0;
}