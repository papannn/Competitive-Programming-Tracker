#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1328/problem/A
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        cout << (b - (a % b) == b ? 0 : b - (a % b)) << endl;
    }
}