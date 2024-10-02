#include <iostream>
#include <fstream>

using namespace std;

int main () {
    // Khai báo và mở file input và output
    ifstream fileIn;
    ofstream fileOut;
    fileIn.open("T7_bai3_mahoa.inp");
    fileOut.open("T7_bai3_mahoa.out");

    // Kiểm tra mở file có thành công không
    if (fileIn.fail() || fileOut.fail()) {
        cout << "Không mở được file" << endl;
        return 1;
    }

    /* 
    Thuật toán kiểm tra:
    Kiểm tra bằng việc get cả dòng từ file input, sau đó duyệt từng ký tự trong dòng đó
    (Lưu ý: Đối với bài này không nên get từng ký tự vì sẽ bị lỗi khi đọc dấu cách)
    */

    int countLower = 0, countUpper = 0, countNumber = 0, countSpecial = 0; // Khởi tạo biến đếm
    string c; // Khai báo biến chứa dòng đọc từ file
    while (!fileIn.eof()) { // Đọc đến cuối file (Nếu con trỏ đang ở cuối file thì dừng)
        getline(fileIn, c); // Đọc dòng từ file input lưu vào biến c
        for (int i = 0; i < c.length(); i++) { // Duyệt từng ký tự trong dòng
            // Kiểm tra ký tự đó thuộc loại nào và tăng biến đếm tương ứng
            if (c[i] >= 'a' && c[i] <= 'z') countLower++;
            else if (c[i] >= 'A' && c[i] <= 'Z') countUpper++;
            else if (c[i] >= '0' && c[i] <= '9') countNumber++;
            else countSpecial++;
        }
        
    }

    // Xuất kết quả ra file output
    fileOut << countLower << endl << countUpper << endl << countNumber << endl << countSpecial;

    // Đóng file
    fileIn.close();
    fileOut.close();
    
    return 0;
}