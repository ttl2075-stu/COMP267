#include <iostream>

using namespace std;

bool isLeapYear(int year) {
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    if (year % 4 == 0) return true;
    return false;
}

int daysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0; // Invalid month
    }
}

int main() {
    int month, year;
    cin >> month;
    cin >> year;

    int days = daysInMonth(month, year);
    if (days == 0) {
        cout << "Thang khong hop le!" << endl;
    } else {
        cout << days << endl;
    }

    return 0;
}