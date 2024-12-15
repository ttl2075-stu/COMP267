#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    float temp;
    vector <float> arr;
    // Yeu cau 1
    cout << "Nhap vao so luong phan tu: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << " Nhap vao gia tri thu " << i << " cua mang: ";
        cin >> temp;
        arr.push_back(temp);
    }
    // arr = {0,1,2,3,4,5,6,7,8,9,10, 11, 11};

    // Yeu cau 2: Tim vi tri cua phan tu nho nhat trong mang
    float minn = *min_element(arr.begin(), arr.end()), index = -1; // Dấu * trước min_element là để lấy giá trị của nó (nếu không có dấu * nó sẽ trả về địa chỉ lưu trữ của giá trị)
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == minn) {
            index = i;
        }
    }
    cout << "Vi tri cua phan tu nho nhat trong mang la: " << index << endl;

    // Yeu cau 3: Tim gia tri gan nhat cua trung binh mang
    float sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    float average = (float) sum/arr.size();
    float avg_lon = INT_MAX, avg_nho = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < average && arr[i] > avg_nho) {
            avg_nho = arr[i];
        }
        if (arr[i] > average && arr[i] < avg_lon) {
            avg_lon = arr[i];
        }
    }
    cout << "Gia tri gan voi gia tri trung binh cua mang la: " << avg_nho << " va " << avg_lon << endl;

    // Yeu cau 4: Tinh tong cac phan tu trong mang (moi phan tu chi duoc tinh mot lan)
    vector <float> arr_unique;
    unique_copy(arr.begin(), arr.end(), back_inserter(arr_unique));
    float sum_unique = 0;
    for (float element : arr_unique) {
        sum_unique += element;
    }
    cout << "Tong cac phan tu khac nhau trong mang la: " << sum_unique << endl;

    return 0;
}