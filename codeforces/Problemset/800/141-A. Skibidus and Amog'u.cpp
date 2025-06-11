#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2065/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for (int i = 0 ; i < s.length() - 2; i++) {
            cout << s[i];
        }
        cout << "i";
        cout << endl;
    }
}