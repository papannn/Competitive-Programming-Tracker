#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1985/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << " " << b << endl;
    }
}