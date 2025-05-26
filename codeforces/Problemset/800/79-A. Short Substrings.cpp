#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1367/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << s[0];
        for (int i = 0; i < s.length(); i += 2) {
            cout << s[i + 1];
        }
        cout << endl;
    }
}