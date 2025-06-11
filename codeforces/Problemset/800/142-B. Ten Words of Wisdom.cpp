#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1850/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int idx = 1;
        int res = -1;
        int resQuality = -1;
        while (n--) {
            int a, b;
            cin >> a >> b;
            if (a <= 10 && b > resQuality) {
                res = idx;
                resQuality = b;
            }
            idx++;
        }
        cout << res << endl;
    }
}