#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1335/A
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << (n % 2 == 0 ? n / 2 - 1 : n / 2) << endl;
    }
}