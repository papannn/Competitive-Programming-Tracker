#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1033/B
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (abs(a - b) == 1) {
            bool valid = true;
            for (int i = 2; i <= sqrt(a + b); i++) {
                if ((a + b) % i == 0) {
                    valid = false;
                    break;
                }
            }
            cout << (valid ? "YES" : "NO") << endl;
            continue;
        }
        cout << "NO" << endl;
    }
}