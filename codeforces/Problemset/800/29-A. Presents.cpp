#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/136/A
int main () {
    int t; cin >> t;
    vector<int> arr (t);
    for (int i = 0 ; i < t; i++) {
        int num;
        cin >> num;
        arr[num - 1] = i + 1;
    }

    for (int i = 0 ; i < t; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}