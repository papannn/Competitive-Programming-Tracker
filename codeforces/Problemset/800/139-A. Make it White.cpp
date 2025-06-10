#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1927/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int minIdx = 99;
        int maxIdx = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'B') {
                minIdx = min(minIdx, i);
                maxIdx = max(maxIdx, i);
            }
        }
        cout << maxIdx - minIdx + 1 << endl;
    }
}