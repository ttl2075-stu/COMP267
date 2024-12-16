// Bài 1 (2.0 điểm): Cho một ma trận kích thước n x m (0 ≤ n, m ≤ 100), mỗi phần tử là một chữ cái
// trong bảng mã ASCII, bạn hãy lập trình thực hiện các công việc dưới đây.
// a. Nhập n, m và ma trận từ bàn phím
// b. Hiển thị lên màn hình ma trận đã nhập
// c. Đếm và hiển thị lên màn hình số lượng chữ cái hoa khác nhau trong ma trận đã nhập

#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

bool is_kytuhoa(char k) {
    char root = toupper(k);
    if (root == k) {
        return true;
    } else {
        return false;
    }
}

int main () {
    int row, col;
    cout << "Nhap vao so dong cua mang: ";
    cin >> row;
    cout << "Nhap vao so cot cua mang: ";
    cin >> col;
    char arr[row][col];
    for (int row_i = 0; row_i < row; row_i++) {
        for (int col_j = 0; col_j < col; col_j++) {
            cout << "Nhap vao phan tu  [" << row_i << "][" << col_j << "]: ";
            cin >> arr[row_i][col_j];
        }
    }
    
    cout << "Ma tran da nhap la: " << endl;
    for (int row_i = 0; row_i < row; row_i++) {
        for (int col_j = 0; col_j < col; col_j++) {
            cout << arr[row_i][col_j] << " ";
        }
        cout << endl;
    }

    cout << "Cac chu cai hoa khac nhau trong mang: ";
    int count = 0;
    bool is_duplicate = false;
    vector <char> letter;
    for (int row_i = 0; row_i < row; row_i++) {
        for (int col_j = 0; col_j < col; col_j++) {
            if (is_kytuhoa(arr[row_i][col_j])) {
                is_duplicate = false;
                for (char k : letter) {
                    if (arr[row_i][col_j] == k) {
                        is_duplicate = true;
                        break;
                    }
                }
                if (is_duplicate == false) {
                    letter.push_back(arr[row_i][col_j]);
                    count++;
                    cout << arr[row_i][col_j] << " ";
                }
            }
        }
    }
    cout << endl;
    cout << "So luong cac ky tu hoa (khong tinh trung lap) co trong ma tran la: " << count << endl;

    return 0;

}