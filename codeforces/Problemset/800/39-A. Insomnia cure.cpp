#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/148/A
int main () {
    int k, l, m, n, d;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;

    int res = 0;
    for (int i = 1 ; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            res++;
        }
    }
    cout << res << endl;
}