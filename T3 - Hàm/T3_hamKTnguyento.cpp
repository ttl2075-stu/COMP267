#include <iostream>
#include <cmath>

using namespace std;

// Hàm kiểm tra n có phải là số nguyên tố không (trả về true or false)
bool is_prime(int n) {
    if (n < 2) return false; // 0, 1 và các số âm không phải số nguyên tố
    // Nếu n chia hết cho i thì n không phải số nguyên tố
    for (int i = 2; i <= sqrt(n); i++) { // Chỉ cần kiểm tra đến căn bậc 2 của n (tối ưu)
        if (n % i == 0) return false;
    }
    return true;
}

int main () {
    int n;
    string status;
    cin >> n;
    is_prime(n) ? status = "true" : status = "false";
    cout << status;
    return 0;
}