#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
	float d, x;
	cin >> d >> x;
	cout << fixed << setprecision(1);
	cout << 3.14 * d * 3 << endl;
	cout << int ((3.14 * pow((float)d/2,2)) / x);
	return 0;	
}