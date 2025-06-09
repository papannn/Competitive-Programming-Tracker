#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1955/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        
        int res = 0;
        if (b / 2 < a) {
            res += n / 2 * b;
            res += n % 2 * a;
        } else {
            res += a * n;
        }
        cout << res << endl;
    }
}