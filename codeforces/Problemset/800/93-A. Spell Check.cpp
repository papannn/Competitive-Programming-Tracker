#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1722/A
// O(t)
int main () {
    int t;
    cin >> t;
    string timur = "Timur";
    sort(timur.begin(), timur.end());
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        
        if (s.length() != timur.length()) {
            cout << "NO" << endl;
            continue;
        }

        bool valid = true;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] != timur[i]) {
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}