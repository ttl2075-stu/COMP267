#include <iostream>
#include <cmath>
using namespace std;

int main () {
    short int numDigit, n, nCheck, temp;
    cin >> n;
    nCheck = n;
    while (nCheck > 0) {
        numDigit++;
        nCheck /= 10;
    }
    nCheck = 0;
    temp = n;

    while (temp > 0)
    {
        nCheck += pow(temp%10,numDigit);
        temp /= 10;
    }
    
    if (n == nCheck)
    {
        cout << "Co";
    } else {
        cout << "Khong";
    }
    
}