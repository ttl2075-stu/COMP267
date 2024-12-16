#include <bits/stdc++.h>
using namespace std;
int main () {
    // Khai bao va nhap lieu
    string s, word;
    int count[8] = {};
    cout << "Nhap vao chuoi can dem: ";
    getline(cin, s, '\n');
    // Xu ly chuoi (xoa , . '  ')
    while(s.find(",") != string::npos) {
        s = s.erase(s.find(","),1);
    }
    while(s.find(".") != string::npos) {
        s = s.erase(s.find("."),1);
    }
    while(s.find("  ") != string::npos) {
        s = s.erase(s.find("  "),1);
    }
    // Cat chuoi va dem
    stringstream ss(s);
    while (ss >> word) {
        count[word.length()]++;
    }
    // In ra man hinh
    for (int i = 1; i <= 7; i++) {
        cout << i << "[" << count[i] << "]" << " ";
    }
    return 0;
}