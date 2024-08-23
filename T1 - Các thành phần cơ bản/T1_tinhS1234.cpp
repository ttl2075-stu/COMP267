#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << fixed << setprecision(3);
    cout << pow(a,2) - 2*b + (a*b)/(pow(c,2)+3) << endl;
    cout << (pow(b,2)-4*a*c)/(a*2) << endl;
    cout << 3*a - pow(b,3) + 2*sqrt(pow(c,2)+1) << endl;
    cout << sqrt( pow(a,2)/b - float(4*a)/float(b*c) + 1 ) << endl;
    return 0;
}