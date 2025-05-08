#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/282/A
int main () {
    int t;
    cin >> t;
    int res = 0;
    while (t--) {
        string s;
        cin >> s;
        if (s[1] == '+') {
            res++;
        } else {
            res--;
        }
    }
    cout << res << endl;
}