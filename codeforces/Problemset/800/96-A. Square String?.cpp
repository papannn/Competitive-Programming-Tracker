#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1619/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        if (s.length() % 2 == 1) {
            cout << "NO" << endl;
            continue;
        }

        bool valid = true;
        for (int i = 0 ; i < s.length() / 2; i++) {
            if (s[i] != s[s.length() / 2 + i]) {
                valid = false;
                break;
            }   
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}