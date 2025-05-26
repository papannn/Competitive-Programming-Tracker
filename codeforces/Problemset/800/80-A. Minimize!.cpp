#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2009/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int minVal = 99;
        for (int c = a; c <= b; c++) {
            minVal = min(minVal, (c - a) + (b - c));
        }
        cout << minVal << endl;
    }
}