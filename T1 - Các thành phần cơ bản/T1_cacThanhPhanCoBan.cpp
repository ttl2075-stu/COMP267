#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int m;
    float h;
    cin >> m;
    cin >> h;
    cout << fixed << setprecision(0) << m * h;
    return 0;
}