#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/266/A
int main () {
    int t;
    cin >> t;
    string s;
    cin >> s;

    int res = 0;
    for (int i = 0 ; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            res++;
        }
    }
    cout << res << endl;
}