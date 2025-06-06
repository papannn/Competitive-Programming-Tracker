#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1722/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s1;
        string s2;

        cin >> s1;
        cin >> s2;
        for (int i = 0 ; i < n; i++) {
            if (s1[i] == 'G') {
                s1[i] = 'B';
            }

            if (s2[i] == 'G') {
                s2[i] = 'B';
            }
        }

        cout << (s1.compare(s2) == 0 ? "YES" : "NO") << endl;
    }
}