#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/702/A
// O(n)
int main () {
    int n;
    cin >> n;
    int curr;
    cin >> curr;
    int cnt = 1;
    int res = 1;
    for (int i = 1 ; i < n; i++) {
        int num;
        cin >> num;
        if (num > curr) {
            cnt++;
            res = max(res, cnt);
        } else {
            cnt = 1;
        }
        curr = num;
    }
    cout << res << endl;
}