#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1294/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int maxVal = max(a, max(b, c));
        int deduct = 0;
        deduct += abs(a - maxVal);
        deduct += abs(b - maxVal);
        deduct += abs(c - maxVal);

        n -= deduct;
        if (n < 0 || n % 3 != 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}