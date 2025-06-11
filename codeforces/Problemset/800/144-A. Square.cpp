#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1921/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        bool found = false;
        for (int i = 0 ; i < 3; i++) {
            int c, d;
            cin >> c >> d;
            if (c != a && !found) {
                cout << abs(c - a) * abs(c - a) << endl;
                found = true;
            }
        }
    }
}