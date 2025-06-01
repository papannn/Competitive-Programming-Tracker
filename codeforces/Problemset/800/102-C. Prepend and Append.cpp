#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1791/C
// O(n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int left = 0;
        int right = s.length() - 1;
        int res = s.length();
        while (left < right) {
            bool one = s[left] == '1' || s[right] == '1';
            bool zero = s[left] == '0' || s[right] == '0';

            if (one && zero) {
                res -= 2;
            } else {
                break;
            }

            left++;
            right--;
        }
        cout << res << endl;
    }
}