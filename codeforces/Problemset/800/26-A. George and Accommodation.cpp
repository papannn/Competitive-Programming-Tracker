#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/467/A
int main () {
    int t;
    cin >> t;
    int res = 0;
    while (t--) {
        int p, q;
        cin >> p >> q;
        if (q - p >= 2) {
            res++;
        }
    }
    cout << res << endl;
}