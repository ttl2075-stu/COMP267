#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

bool is_square(int n) {
    const int sqrt_n = sqrt(n);
    if (sqrt_n * sqrt_n == n) {
        return true;
    } else return false;
}

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ifstream fileIn;
    ofstream fileOut;
    fileIn.open("T7_bai2_magic.inp");
    fileOut.open("T7_bai2_magic.out");

    if (fileIn.fail() || fileOut.fail()) {
        cout << "Không mở được file" << endl;
        return 1;
    }

    int countPrime = 0, countSquare = 0;
    while (!fileIn.eof()) {
        int n;
        fileIn >> n;
        if (is_prime(n)) countPrime++;
        if (is_square(n)) countSquare++;
    }

    fileOut << countSquare << endl << countPrime;

    fileIn.close();
    fileOut.close();

    return 0;
}

