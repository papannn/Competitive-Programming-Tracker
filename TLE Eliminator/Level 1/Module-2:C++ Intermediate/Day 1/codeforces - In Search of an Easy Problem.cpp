#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1030/A
int main () {
    int t;
    bool hard = false;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        hard |= n;
    }
    cout << (hard ? "HARD" : "EASY") << endl;
}