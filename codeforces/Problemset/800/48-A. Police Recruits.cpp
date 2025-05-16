#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/427/A
// O(n)
int main () {
    int t;
    cin >> t;
    int police = 0;
    int res = 0;
    while (t--) {
        int n;
        cin >> n;
        if (n == -1) {
            if (police) {
                police--;
            } else {
                res++;
            }
        } else {
            police += n;
        }
    }
    cout << res << endl;
}