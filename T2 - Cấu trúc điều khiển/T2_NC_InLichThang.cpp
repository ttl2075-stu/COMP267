#include <iostream>
#include <iomanip>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0;
    }
}

int getStartDay(int month, int year) {
    int day = 1;
    int y = year - (14 - month) / 12;
    int m = month + 12 * ((14 - month) / 12) - 2;
    return (day + y + y/4 - y/100 + y/400 + (31*m)/12) % 7;
}

void printCalendar(int month, int year) {
    int daysInMonth = getDaysInMonth(month, year);
    int startDay = getStartDay(month, year);

    cout << "CN\tT2\tT3\tT4\tT5\tT6\tT7" << endl;

    for (int i = 0; i < startDay; ++i) {
        cout << "\t";
    }

    for (int day = 1; day < daysInMonth; ++day) {
        cout << day << '\t';
        if ((day + startDay) % 7 == 0) {
            cout << endl;
        }
    }
    cout<<daysInMonth<<endl;
    cout << endl;
}

int main() {
    int month, year;
    cin >> month;
    cin >> year;

    if (month < 1 || month > 12) {
        cout << "Invalid month!" << endl;
        return 1;
    }

    printCalendar(month, year);
    return 0;
}