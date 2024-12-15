#include <iostream>
using namespace std;

int main () {
    int row, col;
    cin >> row >> col;
    int arr1[row][col], arr2[row][col];
    
    // Thu tu ma tran
    for (int num = 1; num <= 2; num++) { 
        // Thu tu dong
        for (int i = 0; i < row; i++) {
            // Thu tu cot
            for (int j = 0; j < col; j++) {
                if (num == 1) {
                    cin >> arr1[i][j];
                } else if (num == 2) {
                    cin >> arr2[i][j];
                }
            }
        }
        
    }
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
