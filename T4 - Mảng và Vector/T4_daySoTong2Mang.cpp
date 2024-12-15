#include <bits/stdc++.h>
using namespace std;

int main () {
    vector <int> arr1, arr2;
    int n, temp;
    cin >> n;
    for (int i=1; i<=2; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> temp;
            if (i==1) {
                arr1.push_back(temp);
            } else if (i==2) {
                arr2.push_back(temp);
            }
        }
        cin.ignore();
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr1[i] + arr2[i] << " ";
    }
    return 0;
}