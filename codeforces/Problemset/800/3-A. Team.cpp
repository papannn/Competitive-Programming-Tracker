#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/231/A
int main () {
    int t;
    cin >> t;
    int res = 0;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        res += a + b + c >= 2;
    }

    cout << res << endl;
}