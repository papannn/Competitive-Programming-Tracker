#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/80/A
// O(m * sqrt(m))
int main () {
    int n, m;
    cin >> n >> m;
    bool found = false;
    int res;
    for (int i = n + 1; i <= m; i++) {
        if (found) {
            break;
        }
        bool valid = true;
        for (int x = 2; x * x <= i; x++) {
            if (i % x == 0) {
                valid = false;
                break;
            }
        }

        if (valid) {
            found = true;
            res = i;
        }
    }

    cout << (found && res == m ? "YES" : "NO") << endl;
}