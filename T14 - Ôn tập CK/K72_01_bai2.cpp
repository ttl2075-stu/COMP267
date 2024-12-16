#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cmath> // Su dung abs
#include <algorithm> // Su dung sort
using namespace std;

class diemthi {
    private:
        string city;
        float chenhlech;
    public:
        void create(string city, float hb, float thpt) {
            this->city = city;
            this->chenhlech = abs(thpt-hb);
        }
        string getCity() {
            return this->city;
        }
        float getChenhlech() {
            return this->chenhlech;
        }
};

int main () {
    // Cau hinh file
    ifstream fileIn;
    ofstream fileOut;
    fileIn.open("diemthi_01.inp");
    fileOut.open("diemthi_01.out");
    if (fileIn.fail() || fileOut.fail()) {
        cout << "Loi mo file" << endl;
        return 1;
    }
    // Khai bao bien va nhap du lieu
    int n;
    fileIn >> n;
    fileIn.ignore();
    string city;
    float temp1, temp2;
    vector <diemthi> arr;
    for (int i = 0; i < n; i++) {
        getline(fileIn, city, '\n');
        fileIn >> temp1;
        fileIn >> temp2;
        fileIn.ignore();
        diemthi dt;
        dt.create(city, temp1, temp2);
        arr.push_back(dt);
    }
    // Sort lai arr
    // Xep theo thu tu tang dan
    sort(arr.begin(), arr.end(), [](diemthi a, diemthi b) {
        return a.getChenhlech() < b.getChenhlech();
    });
    // In ra 3 TP co muc chenh lech lon nhat
    for (int i = 0; i < 3; i++) {
        // arr[n-1-i] lay tu cuoi danh danh (cuoi cua ds tang dan la lon nhat)
        fileOut << arr[n-1-i].getCity() << " " << arr[n-1-i].getChenhlech() << endl;
    }
    for (int i = 0; i < arr.size(); i++) {
        fileOut << arr[i].getCity() << endl;
    }
    // Dong file
    fileIn.close();
    fileOut.close();
    cout << "Da xu ly xong";
    return 0;
}