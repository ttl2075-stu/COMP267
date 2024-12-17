#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    // Cau hinh file
    ifstream fileIn;
    ofstream fileOut;
    fileIn.open("sinhvien.inp");
    fileOut.open("sinhvien.out");
    if (fileIn.fail() || fileOut.fail()) {
        cout << "Loi doc ghi file";
        return 1;
    }

    // Khai bao va nhap sinh vien
    int n;
    fileIn >> n;
    fileIn.ignore();

    vector<string> name;
    vector<string> city;
    vector<float> avg;
    string name_temp, city_temp;
    float toan, van, anh, dtb;
    for (int i = 0; i < n; i++) {
        getline(fileIn, name_temp, '\n');
        getline(fileIn, city_temp, '\n');
        fileIn >> toan >> van >> anh;
        fileIn.ignore();
        dtb = (float) (toan+van+anh)/3;
        if (dtb>=8.5) {
            name.push_back(name_temp);
            city.push_back(city_temp);
            avg.push_back((float)(toan+van+anh)/3);
        }
    }

    fileOut << name.size() << endl;
    for (int i = 0; i < name.size(); i++) {
        fileOut << name[i] << " " << city[i] << " ";
        fileOut << fixed << setprecision(1) << avg[i] << endl;
    }

    fileIn.close();
    fileOut.close();
    cout << "Da xu ly xong" << endl;
    return 0;
}