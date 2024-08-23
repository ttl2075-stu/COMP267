#include <iostream>
using namespace std;

int main() {
    float mon1, mon2, mon3, d_xettuyen;
    const float diemchuan = 24.1;
    cin >> mon1;
    cin >> mon2;
    cin >> mon3;
    d_xettuyen = mon1 + mon2 + mon3;
    (d_xettuyen >= diemchuan) ? cout << "Do\n" : cout << "Truot\n";
}