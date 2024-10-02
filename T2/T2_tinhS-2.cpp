// Tính giá trị biểu thức S = 1/2 + 2/3 + 3/4 + ... + n/(n+1)

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
    short int n;
    float s = 0;
    cin >> n;
    for (short int i=0; i<=n; i++) {
        s += (float)i/(float)(i+1);
    }
    cout << fixed << setprecision(2) << s;
    return 0;
}