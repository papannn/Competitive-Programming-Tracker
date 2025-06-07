#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1996/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int res = 0;
        res += n / 4;
        res += (n % 4) / 2;
        cout << res << endl;
    }
}