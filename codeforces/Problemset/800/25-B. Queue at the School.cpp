#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/266/B
int main () {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    while (t--) {
        for (int i = s.length() - 1; i >= 1;) {
            if (s[i] == 'G' && s[i - 1] == 'B') {
                swap(s[i], s[i - 1]);
                i -= 2;
                continue;
            }
            
            i--;
        }
    }
    cout << s << endl;
}