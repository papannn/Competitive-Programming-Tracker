#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/gym/104683/problem/C
bool isPalindrome(string s) {
    int l = 0;
    int r = s.length() - 1;
    while (l < r) {
        if (s[l] != s[r]) {
            return false;
        }
        l++;
        r--;
    }

    return true;
}

bool same(string s) {
    bool always = true;
    for (int i = 1 ; i < s.length(); i++) {
        always &= s[i] == s[0];
    }

    return always;
}

int main () {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;

        bool always = same(s);

        while (k--) {
            if (always) {
                s += s[s.length() - 1];
                continue;
            }

            if (isPalindrome(s)) {
                s += s[s.length() - 1];
            } else {
                s = s.substr(0, s.length() / 2);
                always = same(s);
            }
        }
        cout << s << endl;
    }
}