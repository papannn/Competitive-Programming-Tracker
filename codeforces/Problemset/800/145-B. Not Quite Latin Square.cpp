#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1915/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        for (int i = 0 ; i < 3; i++) {
            string s;
            cin >> s;
            if (s[0] == '?' || s[1] == '?' || s[2] == '?') {
                vector<bool> arr(3);
                for (int i = 0; i < 3; i++) {
                    if (s[i] != '?') {
                        arr[s[i] - 'A'] = true;
                    }
                }

                for (int i = 0; i < 3; i++) {
                    if (!arr[i]) {
                        char c = i + 'A';
                        cout << c << endl;
                    }
                }
            }
        }
    }
}