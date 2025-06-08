#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1371/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        double n;
        cin >> n;
        int res = ceil(n / 2);
        cout << res << endl;
    }
}