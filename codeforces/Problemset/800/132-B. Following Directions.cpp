#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1791/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = 0;
        int y = 0;
        bool valid = false;
        for (int i = 0 ; i < n; i++) {
            if (s[i] == 'U') {
                y++;
            }

            if (s[i] == 'D') {
                y--;
            }

            if (s[i] == 'L') {
                x--;
            }

            if (s[i] == 'R') {
                x++;
            }

            if (y == 1 && x == 1) {
                valid = true;
            }
        }

        cout << (valid ? "YES" : "NO") << endl;
    }
}