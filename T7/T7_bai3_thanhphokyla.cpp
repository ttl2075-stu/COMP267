#include <iostream>
#include <fstream>

using namespace std;

int main () {
    ifstream fileIn;
    ofstream fileOut;
    fileIn.open("T7_bai3_mahoa.inp");
    fileOut.open("T7_bai3_mahoa.out");

    if (fileIn.fail() || fileOut.fail()) {
        cout << "Không mở được file" << endl;
        return 1;
    }

    int countLower = 0, countUpper = 0, countNumber = 0, countSpecial = 0;
    string c;
    while (!fileIn.eof()) {
        getline(fileIn, c);
        for (int i = 0; i < c.length(); i++) {
            if (c[i] >= 'a' && c[i] <= 'z') countLower++;
            else if (c[i] >= 'A' && c[i] <= 'Z') countUpper++;
            else if (c[i] >= '0' && c[i] <= '9') countNumber++;
            else countSpecial++;
        }
        
    }

    fileOut << countLower << endl << countUpper << endl << countNumber << endl << countSpecial;

    fileIn.close();
    fileOut.close();
    
    return 0;
}