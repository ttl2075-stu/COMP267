#include <bits/stdc++.h>
#include <cmath>
using namespace std;

bool is_sochinhphuong (int n) {
    if (pow(sqrt(n), 2) == n) {
        return true;
    } else {
        return false;
    }
}

int main () {
    int n, temp, count = 0;
    vector <int> arr;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    
    for (int i = 0; i < n; i++) {
        if ( is_sochinhphuong(arr[i]) ) {
            ++count;
        }
    }
    
    cout << count;
    return 0;
}