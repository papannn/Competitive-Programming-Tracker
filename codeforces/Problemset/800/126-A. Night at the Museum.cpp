#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/731/A
// O(s)
int main () {
    string s;
    cin >> s;
    char c = 'a';
    int res = 0;
    for (int i = 0 ; i < s.length(); i++) {
        int diff1 = abs(s[i] - c);
        int diff2 = ('z' - c) + (s[i] - 'a') + 1;
        int diff3 = (c - 'a') + ('z' - s[i]) + 1;
        res += min(min(diff1, diff2), diff3);
        c = s[i];
    }
    cout << res << endl;
}