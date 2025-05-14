#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/61/A
int main () {
    string s1, s2;
    cin >> s1;
    cin >> s2;
    for (int i = 0 ; i < s1.length(); i++) {
        cout << ((s1[i] - '0') ^ (s2[i] - '0'));
    }
    cout << endl;
}