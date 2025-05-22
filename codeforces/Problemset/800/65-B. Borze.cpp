#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/32/B
// O(n)
int main () {
    string s;
    cin >> s;
    int ptr = 0;
    while (ptr < s.length()) {
        if (s[ptr] == '.') {
            cout << 0;
            ptr++;
        } else {
            ptr++;
            if (s[ptr] == '-') {
                cout << 2;
            } else {
                cout << 1;
            }
            ptr++;
        }
    }
    cout << endl;
}