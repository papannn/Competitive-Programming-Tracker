#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1873/A
// O(1)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int cnt = 0;
        cnt += s[0] != 'a';
        cnt += s[1] != 'b';
        cnt += s[2] != 'c';
        cout << (cnt == 3 ? "NO" : "YES") << endl;
    }
}