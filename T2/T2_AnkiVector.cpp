#include <iostream>
#include <string>
using namespace std;

int main() {
    short int i;
    string s;
    cin >> i;
    cin.ignore();
    getline(cin, s);
    for (int j = 1; j <= i; j++) {
        cout << s << endl;
    }
    return 0;
}