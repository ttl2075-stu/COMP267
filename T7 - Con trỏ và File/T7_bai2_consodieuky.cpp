#include <iostream>
#include <fstream>
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

// Hàm kiểm tra n có phải là số nguyên tố không (trả về true or false)
bool is_prime(int n) {
    if (n < 2) return false; // 0, 1 và các số âm không phải số nguyên tố
    // Nếu n chia hết cho i thì n không phải số nguyên tố
    for (int i = 2; i <= sqrt(n); i++) { // Chỉ cần kiểm tra đến căn bậc 2 của n (tối ưu)
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    // Khai báo và mở file input và output
    ifstream fileIn;
    ofstream fileOut;
    fileIn.open("T7_bai2_magic.inp");
    fileOut.open("T7_bai2_magic.out");

    // Kiểm tra mở file có thành công không
    if (fileIn.fail() || fileOut.fail()) {
        cout << "Không mở được file" << endl;
        return 1;
    }

    int countPrime = 0, countSquare = 0; // Khởi tạo biến đếm số nguyên tố và số chính phương
    // Đọc từng số trong file input và kiểm tra
    while (!fileIn.eof()) { // Đọc đến cuối file (Nếu con trỏ đang ở cuối file thì dừng)
        int n;
        fileIn >> n; // Đọc số n từ file input
        // Kiểm tra n có phải là số nguyên tố và số chính phương không, nếu có thì tăng biến đếm
        if (is_prime(n)) countPrime++;
        if (is_square(n)) countSquare++;
    }

    // Xuất kết quả ra file output
    fileOut << countSquare << endl << countPrime;

    // Đóng file
    fileIn.close();
    fileOut.close();

    return 0;
}

