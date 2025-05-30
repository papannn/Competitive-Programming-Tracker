#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1703/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<bool> arr(26);
        int res = 0;
        for (int i = 0 ; i < s.length(); i++) {
            res++;
            if (!arr[s[i] - 'A']) {
                arr[s[i] - 'A'] = true;
                res++;
            }
        }
        cout << res << endl;
    }
}