#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int n, nSqrt;
    bool check=true;
    cin >> n;
    nSqrt = (sqrt(n)/1);
    for (int i=2; i<=nSqrt; i++) {
        if (n%i==0) {
            check = false;
            break;
        }
    }
    
    if (n<=0) { check = false;}
    (check) ? cout << "Co" : cout << "Khong";
}