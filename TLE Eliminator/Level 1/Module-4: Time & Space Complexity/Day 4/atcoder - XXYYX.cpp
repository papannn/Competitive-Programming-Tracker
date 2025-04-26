#include <bits/stdc++.h>

using namespace std;
// https://atcoder.jp/contests/arc157/tasks/arc157_a
int main () {
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;

    if (abs(b - c) > 1) {
        cout << "No" << endl;
        return 0;
    }

    if (b == 0 && c == 0 && (a > 0 && d > 0)) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
}