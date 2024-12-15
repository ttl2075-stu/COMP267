#include <iostream>
#include <vector>
using namespace std;

int main() {
    int row, col, k, sum_row = 0, sum_col = 0;
    cin >> row >> col >> k;
    vector <vector<int>> arr(row, vector<int>(col));
    // Nhap du lieu
    for (int row_i = 0; row_i < row; row_i++) {
        for (int col_i = 0; col_i < col; col_i++) {
            cin >> arr[row_i][col_i];
        }
    }
    // Tinh theo cot
    if (k < col) {
        for (int row_i = 0; row_i < row; row_i++) {
            sum_col += arr[row_i][k];
        }
    }
    // Tinh theo dong
    if (k < row) {
        for (int col_i = 0; col_i < col; col_i++) {
            sum_row += arr[k][col_i];
        }
    }
    // In ra ket qua
    cout << sum_col << " " << sum_row;
    return 0;
}