#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1676/A
// O(1)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum1 = 0;
        for (int i = 0 ; i < 3; i++) {
            sum1 += n % 10;
            n /= 10;
        }

        int sum2 = 0;
        for (int i = 0 ; i < 3; i++) {
            sum2 += n % 10;
            n /= 10;
        }
        cout << (sum1 == sum2 ? "YES" : "NO") << endl;
    }
}