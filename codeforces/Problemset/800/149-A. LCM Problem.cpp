#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1389/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;
        if (l * 2 <= r) {
            cout << l << " " << l * 2 << endl;
        } else {
            cout << -1 << " " << -1 << endl;
        }
    }
}