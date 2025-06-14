#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1941/A
// O(t * n * m)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> arrLeft(n);
        vector<int> arrRight(m);
        
        for (int& num : arrLeft) cin >> num;
        for (int& num : arrRight) cin >> num;

        int res = 0;
        for (int i = 0 ; i < arrLeft.size(); i++) {
            for (int j = 0; j < arrRight.size(); j++) {
                if (arrLeft[i] + arrRight[j] <= k) {
                    res++;
                }
            }
        }
        cout << res << endl;
    }
}