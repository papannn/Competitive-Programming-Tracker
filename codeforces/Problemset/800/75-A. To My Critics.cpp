#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1850/A
// O(1)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        bool valid = false;
        valid |= a + b >= 10;
        valid |= a + c >= 10;
        valid |= b + c >= 10;
        cout << (valid ? "YES" : "NO") << endl;
    }
}