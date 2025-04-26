#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1509/B
int main () {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int tCount = 0;
        int mCount = 0;
        bool valid = true;
        for (int i = 0 ; i < s.size(); i++) {
            if (s[i] == 'T') {
                tCount++;
            }

            if (s[i] == 'M') {
                mCount++;
            }

            if (mCount > tCount) {
                valid = false;
                break;
            }
        }

        bool valid1 = true;
        tCount = 0;
        mCount = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == 'T') {
                tCount++;
            }

            if (s[i] == 'M') {
                mCount++;
            }

            if (mCount > tCount) {
                valid1 = false;
                break;
            }
        }

        cout << (valid && valid1 && mCount * 2 == tCount? "YES" : "NO") << endl;
    }
}