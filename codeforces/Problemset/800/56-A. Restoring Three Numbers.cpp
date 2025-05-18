#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1154/A
// O(1)
int main () {
    vector<long long> arr(4);
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    sort(arr.begin(), arr.end());
    for (int i = 0 ; i < 3; i++) {
        cout << arr[3] - arr[i] << " ";
    }
    cout << endl;
}