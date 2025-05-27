#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1829/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        string s1 = "codeforces";
        int res = 0;
        for (int i = 0 ; i < s.length(); i++) {
            res += s[i] != s1[i];
        }
        cout << res << endl;
    }
}