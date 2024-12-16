#include <iostream>
#include <string>
#include <vector>
using namespace std;

class color {
    private:
        string tenMau, maMau;
    public:
        color() {
            tenMau = "";
            maMau = "";
        }
        color (string maMau, string tenMau) {
            this->maMau = maMau;
            this->tenMau = tenMau;
        }
        void nhapColor () {
            cout << "Nhap ten mau: ";
            getline(cin, tenMau, '\n');
            cout << "Nhap ma mau: ";
            getline(cin, maMau, '\n');
            // cin.ignore();
        }
        void xuatColor () {
            cout << "Ten mau: " << tenMau << endl;
            cout << "Ma mau: " << maMau << endl;
        }
        string getTenMau () {
            return tenMau;
        }
};

class point {
    private:
        int x, y;
    public:
        point() {
            x = 0;
            y = 0;
        }
        point (int x, int y) {
            this->x = x;
            this->y = y;
        }
        void nhapPoint () {
            cout << "Nhap vao toa do x: ";
            cin >> x;
            cin.ignore();
            cout << "Nhap vao toa do y: ";
            cin >> y;
            cin.ignore();
        }
        void xuatPoint () {
            cout << "Toa do x: " << x << endl;
            cout << "Toa do y: " << y << endl;
        }
        bool cheoChinh () {
            return x == y;
        }
};

class pixel : public color, public point {
    public:
        pixel() : color(), point() {
        }
        pixel(string maMau, string tenMau, int x, int y) : color(maMau, tenMau), point(x, y) {
        }
        ~pixel() {};
        void nhapPixel () {
            nhapColor();
            nhapPoint();
        }
        void xuatPixel () {
            xuatColor();
            xuatPoint();
        }
        bool kiemtra() {
            if (cheoChinh() && getTenMau() == "Xanh") {
                return true;
            } else {
                return false;
            }
        }
};

int main () {
    int n;
    cout << "Nhap so luong pixel: ";
    cin >> n;
    cin.ignore();
    vector <pixel> arr;
    pixel temp;
    for (int i = 0; i < n; i++) {
        cout << "Nhap pixel thu " << i+1 << endl;
        temp.nhapPixel();
        arr.push_back(temp);
        cout << endl;
    }
    cout << endl << "Cac Pixel nam tren duong cheo chinh va co ten mau la mau Xanh:" << endl;
    for (int i = 0; i < n; i++) {
        if (arr[i].kiemtra()) {
            arr[i].xuatPixel();
        }
        cout << endl;
    }
    return 0;
}