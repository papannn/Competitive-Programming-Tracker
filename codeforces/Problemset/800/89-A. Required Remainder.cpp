#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1374/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;
        if (n % x >= y) {
            cout << n - ((n % x) - y) << endl;
        } else {
            cout << n - (n % x) - abs(x - y) << endl;
        }
    }
}