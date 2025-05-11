#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/734/A
int main () {
    int n;
    string s;
    cin >> n;
    cin >> s;
    int anton = 0;
    int danik = 0;
    for (int i = 0 ; i < s.length(); i++) {
        if (s[i] == 'A') {
            anton++;
        } else {
            danik++;
        }
    }

    if (anton > danik) {
        cout << "Anton" << endl;
    } else if (anton < danik) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
}