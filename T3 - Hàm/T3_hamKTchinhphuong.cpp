#include <iostream>
#include <cmath>

using namespace std;

// Hàm kiểm tra n có phải là số chính phương không (trả về true or false)
bool is_square(int n) {
    // Nếu bình phương của căn n bằng n thì n là số chính phương
    const int sqrt_n = sqrt(n);
    if (sqrt_n * sqrt_n == n) {
        return true;
    } else return false;
}

int main () {
    int n;
    string status;
    cin >> n;
    is_square(n) ? status = "true" : status = "false";
    cout << status;
    return 0;
}