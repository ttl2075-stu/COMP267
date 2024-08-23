#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	float doF, doC;
	cin >> doF >> doC;
	cout << fixed << setprecision(2);
	cout << (doF - 32) * ((float)5/(float)9) << endl;
	cout << ((float)9/(float)5) * doC + 32 << endl;
}