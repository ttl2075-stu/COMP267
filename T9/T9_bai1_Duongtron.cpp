#include <bits/stdc++.h>
using namespace std;

class Circle {
private:
    int x,y,r;
public:
    void input() {
        cout << "Nhap toa do tam O(x,y,z): ";
        cin >> x >> y >> r;
    }
    float caculatePerimeter() {
        return 2 * 3.14 * r;
    }
    float caculateArea() {
        return 3.14 * r * r;
    }
};

int main() {
    Circle c;
    c.input();
    cout << "Chu vi hinh tron: " << fixed << setprecision(2) << c.caculatePerimeter() << endl;
    cout << "Dien tich hinh tron: " << fixed << setprecision(2) << c.caculateArea() << endl;
    return 0;
}