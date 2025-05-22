#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1692/A
// O(1)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int res = 0;
        res += b > a;
        res += c > a;
        res += d > a;
        cout << res << endl;
    }
}