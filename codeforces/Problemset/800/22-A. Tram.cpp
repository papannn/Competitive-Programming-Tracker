#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/116/A
int main () {
    int t;
    cin >> t;
    int passenger = 0;
    int res = 0;
    while (t--) {
        int out, in;
        cin >> out;
        cin >> in;
        passenger -= out;
        passenger += in;
        res = max(res, passenger);
    }

    cout << res << endl;
}