#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/112/A
int main () {
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;

    int res = 0;
    for (int i = 0 ; i < s1.length(); i++) {
        if (tolower(s1[i]) < tolower(s2[i])) {
            res = -1;
            break;
        } else if (tolower(s1[i]) > tolower(s2[i])) {
            res = 1;
            break;
        }
    }
    cout << res << endl;
}