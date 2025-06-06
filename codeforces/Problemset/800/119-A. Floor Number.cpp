#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1426/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        int res = 1;
        n -= 2;
        while (n > 0) {
            n -= x;
            res++;
        }
        
        cout << res << endl;
    }
}