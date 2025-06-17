#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1311/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        int divA = a % 2;
        int divB = b % 2;
        if (a == b) {
            cout << 0 << endl;
        } else if (a < b) {
            if ((a % 2) == (b % 2)) {
                cout << 2 << endl;
            } else {
                cout << 1 << endl;
            }
        } else {
            if ((a % 2) == (b % 2)) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        }
    }
}