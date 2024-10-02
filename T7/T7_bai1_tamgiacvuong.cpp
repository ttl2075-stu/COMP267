#include <iostream>
#include <fstream>

using namespace std;

int main () {
    ifstream fileIn;
    ofstream fileOut;
    fileIn.open("./T7_bai1_input.inp");
    fileOut.open("./T7_bai1_output.out");

    if (fileIn.fail() || fileOut.fail()) {
        cout << "Không mở được file" << endl;
        return 1;
    }

    int n;
    fileIn >> n;
    for (int i = 1; i<=n ; i++) {
        fileOut << string(i, '*') << endl;
    }

    fileIn.close();
    fileOut.close();
    
    return 0;
}