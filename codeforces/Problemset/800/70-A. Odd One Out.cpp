#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1915/A
// O(1)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b) {
            cout << c << endl;
        } else if (a == c) {
            cout << b << endl;
        } else {
            cout << a << endl;
        }
    }
}