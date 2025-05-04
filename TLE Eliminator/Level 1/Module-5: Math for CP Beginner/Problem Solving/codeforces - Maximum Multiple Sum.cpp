#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1985/B
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int res = -1;
        int maxVal = -1;
        for (int i = 2; i <= n; i++) {
            int prod = 0;
            int j = 1;
            while (i * j <= n) {
                prod += i * j;
                j++;
            }

            if (prod > maxVal) {
                res = i;
                maxVal = prod;
            }
        }

        cout << res << endl;
    }
}