#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // Su dung sort

using namespace std;

class nhanvien {
    private:
        string hoTen;
        int luongCB;
    public:
        nhanvien () {
            hoTen = "";
            luongCB = 0;
        }
        nhanvien (string hoten, int luongCB) {
            this->hoTen = hoTen;
            this->luongCB = luongCB;
        }
        int getBaseSalary () {
            return luongCB;
        }
        void nhapNhanvien () {
            cout << " - Ho va ten: ";
            getline(cin, hoTen, '\n');
            cout << " - Luong co ban: ";
            cin >> luongCB;
            cin.ignore();
        }
        void hienthiNhanvien () {
            cout << "Ho va Ten: " << hoTen << endl;
            cout << "Luong co ban: " << luongCB << endl;
        }
        string getFullname () {
            return hoTen;
        }
};

class quanly : public nhanvien {
    private:
        int thuong, thamNien;
    public:
        quanly () : nhanvien () {
            thuong = 0;
            thamNien = 0;
        }
        quanly(string hoTen, int luongCB, int thuong, int thamNien) : nhanvien (hoTen, luongCB) {
            this->thuong = thuong;
            this->thamNien = thamNien;
        }
        void nhapQuanly () {
            nhapNhanvien();
            cout << " - Nhap tien thuong: ";
            cin >> thuong;
            cin.ignore();
            cout << " - Nhap tham nien: ";
            cin >> thamNien;
            cin.ignore();
        }
        void hienthiQuanly () {
            hienthiNhanvien();
            cout << "Thuong: " << thuong << endl;
            cout << "Tham nien: " << thamNien << endl;
        }
        int getThamNien () {
            return thamNien;
        }
};

int main () {
    int n;
    cout << "Nhap vao so luong quan ly: ";
    cin >> n;
    cin.ignore();
    vector <quanly> arr;
    quanly root;
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin quan ly " << i+1 << endl;
        root.nhapQuanly();
        arr.push_back(root);
    }

    sort(arr.begin(), arr.end(), [](quanly a, quanly b) {
        return a.getBaseSalary() < b.getBaseSalary();
    });
    cout << "Thong tin Quan ly da nhap:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << "Thong tin Quan ly " << i+1 << endl;
        arr[i].hienthiQuanly();
        cout << endl;
    }

    int search_thamNien;
    cout << "Nhap nam tham nien can tim kiem: ";
    cin >> search_thamNien;
    cin.ignore();
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i].getThamNien() == search_thamNien) {
            cout << arr[i].getFullname();
        }
    }
    
    return 0;
}