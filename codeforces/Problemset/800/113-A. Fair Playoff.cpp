#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1535/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        vector<int> arr(4);
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        int a = max(arr[0], arr[1]);
        int b = max(arr[2], arr[3]);
        sort(arr.begin(), arr.end());
        cout << (min(a, b) == min(arr[2], arr[3]) && max(a, b) == max(arr[2], arr[3]) ? "YES" : "NO") << endl;
    }
}