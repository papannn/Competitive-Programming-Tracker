#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1629/problem/B
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long l, r, k;
        cin >> l >> r >> k;
        
        if (r - l == 0) {
            if (l == 1) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
            continue;
        }

        long long odd = (r + 1) / 2 - (l / 2);
        cout << (k >= odd ? "YES" : "NO") << endl;
    }
}