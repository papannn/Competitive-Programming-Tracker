#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1971/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << min(a, b) << " " << max(a, b) << endl;
    }
}