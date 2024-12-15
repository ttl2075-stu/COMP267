#include <iostream>
#include <fstream>

using namespace std;

int main () {
    ifstream fileIn; // Đặt file input chỉ đọc
    ofstream fileOut; // Đặt file output chỉ ghi
    // Đường dẫn file input và output
    fileIn.open("./T7_bai1_input.inp");
    fileOut.open("./T7_bai1_output.out");

    // Kiểm tra mở file có thành công không
    if (fileIn.fail() || fileOut.fail()) {
        cout << "Không mở được file" << endl;
        return 1;
    }

    // Đọc số n từ file input
    int n;
    fileIn >> n;
    // Xuất tam giác vuông từ 1 đến n
    for (int i = 1; i<=n ; i++) {
        fileOut << string(i, '*') << endl;
    }

    // Đóng file
    fileIn.close();
    fileOut.close();
    
    return 0;
}