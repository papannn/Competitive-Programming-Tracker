#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1742/A
// O(1)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        bool valid = false;
        valid |= a + b == c;
        valid |= a + c == b;
        valid |= b + c == a;
        cout << (valid ? "YES" : "NO") << endl;
    }
}