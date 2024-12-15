#include <iostream>
#include <vector>
using namespace std;
int main () {
    // Phần nhập dữ liệu:
    int n, temp;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i<n; i++) {
        // cout << "Nhap vao gia tri thu " << i << ": ";
        cin >> temp;
        arr.push_back(temp);
    }
    
    // Phần thực hiện các thao tác
    int eventCount = 0, oddCount = 0;
    int arrLength = arr.size();
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] == 0) {
            continue;
        } else if (arr[i] % 2 == 0) {
            eventCount++;
        } else if (arr[i] % 2 == 1) {
            oddCount++;
        }
    }
    cout << eventCount << ' ' << oddCount;
    return 0;
}