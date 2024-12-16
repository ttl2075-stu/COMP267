#include <iostream>
#include <cmath> // Su dung abs
#include <fstream>
#include <vector>
using namespace std;


int main () {
    // Khai bao Tep
    ifstream fileIn;
    ofstream fileOut;
    fileIn.open("danso.inp");
    fileOut.open("danso.out");
    if (fileIn.fail() || fileOut.fail()) {
        cout << "Loi khong mo duoc file" << endl;
        return 0;
    }

    // Khai bao cac bien, vector va nhap lieu
    int n;
    string city_temp;
    float ds2020, ds2021, ds_Max = 0;
    vector <string> City;
    vector <float> ds;
    fileIn >> n;
    fileIn.ignore();
    for (int i = 1; i <= n; i++) {
        getline(fileIn, city_temp, '\n');
        fileIn >> ds2020;
        fileIn >> ds2021;
        fileIn.ignore();
        City.push_back(city_temp);
        ds.push_back(abs(ds2020-ds2021));
        // Set gia tri dan so max
        if (abs(ds2020-ds2021) > ds_Max) {
            ds_Max = abs(ds2020-ds2021);
        }
    }
    // In ra cac thanh pho co muc chenh lech dan so lon nhat
    for (int i = 1; i <= n; i++) {
        if (ds_Max == ds[i-1]) {
            fileOut << City[i-1] << endl;
        }
    }
    // In ra cac thanh pho co muc chenh lech bang nhau
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (ds[i] == ds[j]) {
                fileOut << City[i] << " " << City[j] << endl;
            }
        }
    }

    fileIn.close();
    fileOut.close();
    cout << "Da xu ly xong";
    return 0;
}