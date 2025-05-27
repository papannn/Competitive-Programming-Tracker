#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1950/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a < b && b < c) {
            cout << "STAIR" << endl;
        } else if (a < b && b > c) {
            cout << "PEAK" << endl;
        } else {
            cout << "NONE" << endl;
        }
    }
}