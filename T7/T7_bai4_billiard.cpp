#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main () {
    ifstream fileIn;
    ofstream fileOut;
    fileIn.open("./T7_bai4_billiard.inp");
    fileOut.open("./T7_bai4_billiard.out");

    if (fileIn.fail() || fileOut.fail()) {
        cout << "Không mở được file" << endl;
        return 1;
    }

    int n, max = -1, x, y, elo, tempX, tempY;
    string s, tempS;
    vector<string> name(n);
    vector<int> eloScore(n);
    fileIn >> n;
    fileIn.ignore();

    for (int i = 1 ; i <= n; i++) {
        getline(fileIn, s);
        fileIn >> tempX;
        fileIn >> tempY;
        fileIn.ignore();
        elo = abs(tempX-tempY);
        if (elo > max) max=elo;
        name[i] = s;
        eloScore[i] = elo;
    }
    
    for (int i = 1; i <= n; i++) {
        if (eloScore[i] == max) {
            fileOut << name[i] << endl;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = i+1; j <= n; j++) {
            if (eloScore[i] == eloScore[j]) {
                fileOut << name[i] << " - " << name[j] << endl;
            }
        }
    }

    fileIn.close();
    fileOut.close();
    
    return 0;
}