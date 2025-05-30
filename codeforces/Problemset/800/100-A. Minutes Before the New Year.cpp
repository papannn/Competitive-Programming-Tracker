#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1283/A
// O(1)
int main () {
    int t;
    cin >> t;
    int minDay = 24 * 60;
    while (t--) {
        int hour, min;
        cin >> hour >> min;
        min += hour * 60;
        cout << minDay - min << endl;
    }
}