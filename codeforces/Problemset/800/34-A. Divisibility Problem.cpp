#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1328/A
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << (b - (a % b) == b ? 0 : b - (a % b)) << endl;
    }
}