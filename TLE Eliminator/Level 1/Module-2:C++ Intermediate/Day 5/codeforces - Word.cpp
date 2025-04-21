#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/59/A
int main () {
    string s;
    cin >> s;
    int low = 0;
    int hi = 0;
    for (int i = 0; i < s.length(); i++) {
        if (islower(s[i])) {
            low++;
        } else {
            hi++;
        }
    }

    for (int i = 0 ; i < s.length(); i++) {
        if (low >= hi) {
            cout << (char) tolower(s[i]);
        } else {
            cout << (char) toupper(s[i]);
        }
    }
    cout << endl;
}