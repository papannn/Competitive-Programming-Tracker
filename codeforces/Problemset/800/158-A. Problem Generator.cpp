#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1980/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> arr(7);
        for (int i = 0 ; i < n; i++) {
            arr[s[i] - 'A']++;
        }

        int res = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] < m) {
                res += abs(arr[i] - m);
            }
        }
        cout << res << endl;
    }
}