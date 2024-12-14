#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std;

double calculateS1(int n) {
    double S1 = 0.0;
    for (int k = 1; k <= n; k++) {
        S1 += 1.0 / (k * (k + 1));
    }
    return S1;
}

double calculateS2(int n) {
    double S2 = 0.0;
    for (int i = 0; i < n; i++) {
        S2 = sqrt(3 + S2);
    }
    return S2;
}

double calculateS3(int n) {
    double S3 = 0.0;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i; 
        S3 += 1.0 / sum;
    }
    return S3;
}

int main() {
    int n;
    cin >> n;

    double S1 = calculateS1(n);
    double S2 = calculateS2(n);
    double S3 = calculateS3(n);

    cout << fixed << setprecision(3);
    cout << S1 << ' ' << S2 << ' ' << S3 << endl;

    return 0;
}
