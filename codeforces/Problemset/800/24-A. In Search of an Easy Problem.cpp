#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1030/A
int main () {
    int t;
    cin >> t;
    bool res = 0;
    while (t--) {
        int n;
        cin >> n;
        res |= n;
    }

    cout << (res ? "HARD" : "EASY") << endl; 
}