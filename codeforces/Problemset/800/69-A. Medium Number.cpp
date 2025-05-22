#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1760/A
// O(1)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << max(min(a, b), min(max(a, b), c)) << endl;
    }
}