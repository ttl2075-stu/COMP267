#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main () {
    // Khai báo và mở file input và output
    ifstream fileIn;
    ofstream fileOut;
    fileIn.open("./T7_bai4_billiard.inp");
    fileOut.open("./T7_bai4_billiard.out");

    // Kiểm tra mở file có thành công không
    if (fileIn.fail() || fileOut.fail()) {
        cout << "Không mở được file" << endl;
        return 1;
    }

    int n, max = -1, x, y, elo, tempX, tempY;
    string s, tempS;

    // Khai báo mảng chứa tên và điểm chênh lệch elo
    vector<string> name(n);
    vector<int> eloScore(n);

    // Đọc số lượng tuyển thủ
    fileIn >> n;
    fileIn.ignore(); // Đọc ký tự xuống dòng

    // Đọc thông tin tuyển thủ
    for (int i = 1 ; i <= n; i++) {
        getline(fileIn, s); // Đọc tên tuyển thủ
        fileIn >> tempX; // Đọc điểm elo
        fileIn >> tempY; // Đọc điểm elo
        fileIn.ignore(); // Đọc ký tự xuống dòng
        elo = abs(tempX-tempY); // Tính điểm chênh lệch elo (abs để lấy giá trị tuyệt đối)
        if (elo > max) max=elo; // Tìm điểm elo lớn nhất
        name[i] = s; // Lưu tên tuyển thủ vào mảng
        eloScore[i] = elo; // Lưu điểm elo vào mảng
    }
    
    // Xuất ra file những tuyển thủ có điểm elo lớn nhất
    for (int i = 1; i <= n; i++) {
        if (eloScore[i] == max) {
            fileOut << name[i] << endl;
        }
    }

    // Xuất ra file những cặp tuyển thủ có điểm elo bằng nhau
    for (int i = 1; i <= n; i++) {
        for (int j = i+1; j <= n; j++) {
            if (eloScore[i] == eloScore[j]) {
                fileOut << name[i] << " - " << name[j] << endl;
            }
        }
    }

    // Đóng file
    fileIn.close();
    fileOut.close();
    
    return 0;
}