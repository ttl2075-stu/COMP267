#include <iostream>
using namespace std;

int main () {
    float cpa;
    short int drl;

    cin >> cpa;
    cin >> drl;

    if (drl<65 || cpa<2.5 || cpa > 4 || drl>100) {
        cout << "Khong dat";
    }
    else if (cpa >=3.6) {
        if (drl>=90) {
            cout << "Xuat sac";
        } else if (drl>=80) {
            cout << "Gioi";
        } else if (drl>=65) {
            cout << "Kha";
        }
    } 
    else if (cpa>=3.2) {
        if (drl>=80) {
            cout << "Gioi";
        } else if (drl>=65) {
            cout << "Kha";
        }
    }
    else if (cpa>=2.5 && drl>=65) {
        cout << "Kha";
    }
}