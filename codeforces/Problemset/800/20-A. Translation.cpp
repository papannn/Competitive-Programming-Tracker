#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/41/A
int main () {
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;

    bool valid = true;
    if (s1.length() != s2.length()) {
        valid = false;
    }

    for (int i = 0 ; i < s1.length(); i++) {
        if (s1[i] != s2[s2.length() - 1 - i]) {
            valid = false;
            break;
        }
    }
    cout << (valid ? "YES" : "NO") << endl;
}