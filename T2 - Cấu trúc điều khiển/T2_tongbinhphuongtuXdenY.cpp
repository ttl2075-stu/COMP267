#include <iostream>
#include <cmath>
using namespace std;

int main () {
    short int x,y;
    int sum = 0;
    cin >> x >> y;
    for (short i=x; i<=y; i++) {
        sum += pow(i,2);
    }
    cout << sum;
    return 0;
}