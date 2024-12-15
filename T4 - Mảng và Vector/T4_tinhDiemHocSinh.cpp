#include <bits/stdc++.h>
using namespace std;

int main () {
    int hs, mon, temp, count_gioi = 0, count_kha = 0, count_tb = 0, count_yeu = 0;
    float dtb_temp = 0;
    vector<vector<int>> arr(hs, vector<int>(mon));
    cin >> hs;
    cin >> mon;
    for (int i = 0; i < hs; i++) {
        for (int j = 0; j < mon; j++) {
            cin >> temp;
            arr[i][j] = temp;
        }
    }
    for (int i = 0; i < hs; i++) {
        dtb_temp = 0;
        for (int j = 0; j < mon; j++) {
            dtb_temp += arr[i][j];
        }
        dtb_temp /= mon;
        if (dtb_temp >= 0 && dtb_temp <= 10) {
            if (dtb_temp >= 8) {
                count_gioi++;
            } else if (dtb_temp >= 6) {
                count_kha++;
            } else if (dtb_temp >= 5) {
                count_tb++;
            } else {
                count_yeu++;
            }
        }
    }
    cout << count_gioi << " " << count_kha << " " << count_tb << " " << count_yeu << endl;
    return 0;

}