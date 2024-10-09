#include <iostream>
#include <iomanip>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {  
        return a;
    }
    return gcd(b, a % b); 
}

class Fraction {
private:
    int a, b;
public:
    void input () {
        cout << "Nhap tu so: ";
        cin >> a;
        cout << "Nhap mau so: ";
        cin >> b;
    }

    void display() const {
        cout << "Phan so: " << a << "/" << b << endl;
    }

    void reduce() {
        int ucln = gcd(a, b);
        a /= ucln;
        b /= ucln;
    }
};

int main () {
    Fraction f;
    f.input();
    f.display();
    f.reduce();
    f.display();
    return 0;
}