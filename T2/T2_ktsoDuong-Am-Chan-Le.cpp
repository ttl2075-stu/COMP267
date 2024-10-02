#include <iostream>
using namespace std;
int main () {
    int x;
    cin >> x;
    if (x == 0) {
        cout << "Khong duong khong am" << endl << "So chan" << endl;
    } 
    else if (x > 0) {
        cout << "So nguyen duong" << endl;
        if (x%2==0) {
            cout << "So chan" << endl;
        } else {
            cout << "So le" << endl;
        }
    } 
    else if (x < 0) {
        cout << "So nguyen am" << endl;
        if (x%2==0) {
            cout << "So chan" << endl;
        } else {
            cout << "So le" << endl;
        }

    }
    
    return 0;
}