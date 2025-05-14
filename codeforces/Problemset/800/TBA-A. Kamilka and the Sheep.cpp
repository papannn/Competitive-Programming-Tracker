#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2092/A
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long maxVal = -1;
        long long minVal = 1e9 + 1;
        while (n--) {
            long long num;
            cin >> num;
            maxVal = max(maxVal, num);
            minVal = min(minVal, num);
        }
        cout << maxVal - minVal << endl;
    }
}