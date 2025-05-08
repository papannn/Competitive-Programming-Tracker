#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1617/problem/B
int main () {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (n % 2 == 1) { // Odd
            for (int i = 2; i <= n; i++) {
                long long num = n - i - 1;
                if (gcd(num, i) == 1) {
                    cout << num << " " << i << " " << 1 << endl;
                    break;
                }
            }
        } else {
            cout << (n - 2) / 2 << " " << (n - 2) / 2 + 1 << " " << 1 << endl;
        }
    }
}