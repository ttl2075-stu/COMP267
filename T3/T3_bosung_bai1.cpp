#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float calcFX(float x) {
    if (x>1) {
        return sqrt(pow(x,2)-1);
    } else if (x>=-1 && x <=1) {
        return -2 * (x-3);
    } else {
        cout << "Khong hop le" << endl;
        return 0;
    }
}

float calcGX(float x) {
    if (x>2) {
        return pow(x,2)+1;
    } else if (x<-2) {
        return 6 - (5*x);
    } else {
        return 2*x -1;
    }
}

int main () {
    float x;
    cin >> x;
    cout << fixed << setprecision(2);
    cout << "f(x) = " << calcFX(x) << endl;
    cout << "g(x) = " << calcGX(x) << endl;
    return 0;
}