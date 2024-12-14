#include <iostream>
using namespace std;

bool is_doixung(int N) {
	int M = 0, N_tmp = N;
	while (N_tmp > 0) {
		int tmp = N_tmp % 10;
		N_tmp /= 10;
		M = M * 10 + tmp;
	}

	if (M == N) return true;
	else return false;
}

int main() {
	int N;
	cin >> N;
	string status;
	is_doixung(N) ? status = "true" : status = "false";
    cout << status;

	
	return 0;
}