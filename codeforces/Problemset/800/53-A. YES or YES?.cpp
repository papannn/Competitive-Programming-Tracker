#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1703/A
// O(1)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool valid = true;
        valid &= tolower(s[0]) == 'y';
        valid &= tolower(s[1]) == 'e';
        valid &= tolower(s[2]) == 's';
        cout << (valid ? "YES" : "NO") << endl;
    }
}