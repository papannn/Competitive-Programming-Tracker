#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1899/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if ((n + 1) % 3 == 0 || (n - 1) % 3 == 0) {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    }
}