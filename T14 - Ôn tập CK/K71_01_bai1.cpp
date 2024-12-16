// Cho một ma trận kích thước n x m (n, m là số nguyên dương), mỗi phần tử là một số nguyên, bạn
// hãy lập trình thực hiện các công việc dưới đây.
// a. Nhập n, m và ma trận từ bàn phím
// b. Hiển thị lên màn hình ma trận đã nhập
// c. Đếm và hiển thị số lượng phần tử của ma trận là số chính phương

#include <iostream>
#include <cmath>
using namespace std;

bool is_sochinhphuong(int n) {
    if (n <= 0) return false;
    int root = sqrt(n);
    return root*root == n;
}

int main () {
    int row, col;
    cout << "Nhap vao so dong cua mang: ";
    cin >> row;
    cout << "Nhap vao so cot cua mang: ";
    cin >> col;
    int arr[row][col];
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

    cout << "Cac so chinh phuong trong ma tran la: ";
    int count = 0;
        for (int row_i = 0; row_i < row; row_i++) {
        for (int col_j = 0; col_j < col; col_j++) {
            if (is_sochinhphuong(arr[row_i][col_j])) {
                count++;
                cout << arr[row_i][col_j] << " ";
            }
        }
    }
    cout << endl;
    cout << "So luong so chinh phuong co trong ma tran la: " << count << endl;

    return 0;

}