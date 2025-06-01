#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1520/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ptr = 0;
        vector<bool> visited (26);
        bool valid = true;
        while (ptr < s.length()) {
            char c = s[ptr];
            if (visited[c - 'A']) {
                valid = false;
                break;
            }
            visited[c - 'A'] = true;

            while (ptr < s.length() && s[ptr] == c) {
                ptr++;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}