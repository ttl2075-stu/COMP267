#include <iostream>
#include <string>
using namespace std;

int calculateDOW(int d, int m, int y) {
    if (m < 3) {
        m += 12;
        y -= 1;
    }
    int k = y % 100;
    int j = y / 100;
    int f = d + 13 * (m + 1) / 5 + k + k / 4 + j / 4 + 5 * j;
    return f % 7;
}

string getDayOfWeek(int dow) {
    switch (dow) {
        case 0: return "Saturday";
        case 1: return "Sunday";
        case 2: return "Monday";
        case 3: return "Tuesday";
        case 4: return "Wednesday";
        case 5: return "Thursday";
        case 6: return "Friday";
        default: return "Invalid";
    }
}

int main() {
    int d, m, y;
    cin >> d;
    cin >> m;
    cin >> y;

    int dow = calculateDOW(d, m, y);
    cout << getDayOfWeek(dow) << endl;

    return 0;
}