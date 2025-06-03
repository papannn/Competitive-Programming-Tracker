#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1926/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int A = 0, B = 0;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == 'A') {
                A++;
            } else {
                B++;
            }
        }
        cout << (A > B ? "A" : "B") << endl;
    }
}