#include <iostream>
using namespace std;
int main () {
    double x,y;
    cin >> x >> y;
    if (x == 0 && y == 0) {
        cout << "1 2 3 4";
    } else if (x == 0 && y > 0) {
        cout << "1 2";
    } else if (x == 0 && y < 0) {
        cout << "3 4";
    } else if (y == 0 && x > 0) {
        cout << "1 4";
    } else if (y == 0 && x < 0) {
        cout << "2 3";
    } else if (x > 0 && y > 0) {
        cout << "1";
    } else if (x > 0 && y < 0) {
        cout << "4";
    } else if (x < 0 && y > 0) {
        cout << "2";
    } else if (x < 0 && y < 0) {
        cout << "3";
    }
    return 0;
}