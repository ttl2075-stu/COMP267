#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int minDigit = INT_MAX;
    int maxDigit = INT_MIN;

    while (n > 0) {
        int digit = n % 10;
        if (digit < minDigit) {
            minDigit = digit;
        }
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        n /= 10;
    }

    cout << minDigit << ' ' << maxDigit;

    return 0;
}