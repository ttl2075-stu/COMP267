#include <iostream>
#include <string>
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
    while (s.find(" ") != string::npos) {
        word = s.substr(0,s.find(" "));
        count[word.length()]++;
        s.erase(0,s.find(" ")+1);
    }
    count[s.length()]++; 
        // Dem tu cuoi cung trong xau 
        // (do tu cuoi cung khong co khoang trang de thuc hien trong while)
    // In ra man hinh
    for (int i = 1; i <= 7; i++) {
        cout << i << "[" << count[i] << "]" << " ";
    }
    return 0;
}