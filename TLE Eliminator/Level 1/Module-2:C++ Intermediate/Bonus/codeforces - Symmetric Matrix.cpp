#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1426/B
int main () {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        bool slideBoth = false;
        bool slideLeft = false;
        while (n--) {
            int a, b, c, d;
            cin >> a >> b;
            cin >> c >> d;

            slideBoth |= a == d && b == c;
            slideLeft |= b == c;
        }

        if (m % 2 == 1) {
            cout << "NO" << endl;
            continue;
        }

        cout << (slideLeft ? "YES" : "NO") << endl;
    }
    
}