#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1409/A
// O(1)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long diff = abs(a - b);
        cout << diff / 10 + (diff % 10 > 0) << endl;
    }
}