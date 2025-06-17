#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2044/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == 'q') {
                cout << 'p';
            } else if (s[i] == 'p') {
                cout << 'q';
            } else {
                cout << 'w';
            }
        }
        cout << endl;
    }
}