#include <iostream>
using namespace std;

int main() {
    short int songuyen;
    short int a,b,c,d;
    cin >> songuyen;
    d = songuyen%10;
    songuyen /= 10;
    c = songuyen%10;
    songuyen /= 10;
    b = songuyen%10;
    a = songuyen/10;
    
    cout << d << '+' << c << '+' << b << '+' << a << '=' << a+b+c+d << endl;
    cout << d << '*' << c << '*' << b << '*' << a << '=' << a*b*c*d << endl;
    cout << c+d << endl;
    cout << d*1000 + c*100 + b*10 + a << endl;
    cout << (a+b+c+d) % 10 << endl;
}