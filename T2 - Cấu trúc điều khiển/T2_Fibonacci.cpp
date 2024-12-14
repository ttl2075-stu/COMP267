#include <iostream>

using namespace std;

// Hàm tính số Fibonacci thứ n
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Tháng n phải lớn hơn 0." << endl;
        return 1;
    }

    cout << fibonacci(n) << endl;

    return 0;
}

/* 
CÁCH TỐI ƯU HƠN (KHÔNG SỬ DỤNG ĐỆ QUY):

#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Tháng n phải lớn hơn 0." << endl;
        return 1;
    }

    cout << fibonacci(n) << endl;

    return 0;
}
*/