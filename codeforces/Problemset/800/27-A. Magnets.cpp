#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/344/A
int main () {
    int t;
    cin >> t;
    t--;
    int res = 1;
    string currMagnet;
    cin >> currMagnet;
    while (t--) {
        string magnet;
        cin >> magnet;
        if (currMagnet[1] == magnet[0]) {
            res++;
        }
        currMagnet = magnet;
    }
    cout << res << endl;
}