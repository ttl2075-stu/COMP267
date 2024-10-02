#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int M = 0, N_tmp = N;
	while (N_tmp > 0) {
		int tmp = N_tmp % 10;
		N_tmp /= 10;
		M = M * 10 + tmp;
	}

	if (M == N) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}