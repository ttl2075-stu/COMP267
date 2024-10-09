#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
class Student {
private:
    string studentID;
    string fullName;
    float averageScore;
    
public:
    void input() {
        cout << "Nhap ma sinh vien: ";
        cin >> studentID;
        cin.ignore();
        cout << "Ho va ten sinh vien: ";
        getline(cin, fullName);
        cout << "Diem trung binh cua sinh vien: ";
        cin >> averageScore;
    }

    void display() const {
        cout << "Ma sinh vien: " << studentID << endl;
        cout << "Ho va ten: " << fullName << endl;
        cout << "Diem trung binh: " << fixed << setprecision(1) << averageScore << endl;
    }

    float getAverageScore() const {
        return averageScore;
    }

};

int main() {
    int n;
    cout << "Nhap vao so luong sinh vien: ";
    cin >> n;

    vector<Student> students(n);

    for (int i = 0; i < n; i++) {
        students[i].input();
    }

    sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        return a.getAverageScore() > b.getAverageScore();
    });

    cout << "\nThong tin cua cac sinh vien:\n";
    for(auto& student : students) {
        student.display();
        cout << "\n";
    }

    return 0;
}