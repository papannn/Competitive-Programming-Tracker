#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1360/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        int minVal = min(a, b);
        int maxVal = max(a, b);

        if (minVal * 2 >= maxVal) {
            cout << (minVal * 2) * (minVal * 2) << endl;
        } else if (maxVal * minVal * 2 <= maxVal * maxVal) {
            cout << maxVal * maxVal << endl;
        } else {
            cout << (maxVal * 2) * (maxVal * 2) << endl;
        }
    }
}