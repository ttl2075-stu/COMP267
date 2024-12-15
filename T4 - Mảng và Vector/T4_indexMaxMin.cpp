#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, temp, minn, maxx, minn_index = 0, maxx_index = 0;
    vector <int> arr;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    minn = arr[0]; 
    maxx = arr[0];
    for (int i = 0; i < n; i++) {
        if ( arr[i] > maxx) {
            maxx = arr[i];
            maxx_index = i;
        }
        if ( arr[i] < minn) {
            minn = arr[i];
            minn_index = i;
        }
    }
    cout << minn_index << " " << maxx_index;
    return 0;
}