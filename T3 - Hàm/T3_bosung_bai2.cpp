#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float calcFXY (float x, float y) {
    return pow(x,2) + x*y + pow(y,2) - 2*x - y;
}

float calcFXYZ (float x, float y, float z) {
    if (y == 0) {
        cout << "Loi, mau so khong hop le";
        return 0;
    } else return (x*y*z) + x / (pow(y,z));
}

int main () {
    float x, y, z;
    cout << "Nhap vao x: ";
    cin >> x;
    cout << "Nhap vao y: ";
    cin >> y;
    cout << "Nhap vao z: ";
    cin >> z;

    cout << fixed << setprecision(3);
    cout << "F(x,y) = " << calcFXY(x,y) << endl;
    cout << "F(x,y,z) = " << calcFXYZ(x,y,z) << endl;
    return 0;
}