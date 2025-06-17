#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1986/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        vector<int> arr(3);
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr.begin(), arr.end());
        cout << abs(arr[0] - arr[1]) + abs(arr[1] - arr[2]) << endl;
    }
}