#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1760/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int res = 0;
        for (int i = 0 ; i < s.length(); i++) {
            res = max(res, s[i] - 'a' + 1);
        }
        cout << res << endl;
    }
}