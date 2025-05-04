#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1984/B
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        int remainder = 0;
        bool valid = true;
        while (n / 10 != 0) {
            int num = n % 10;

            if (num == 0 && remainder) {
                valid = false;
                break;
            }

            if (num - remainder == 9) {
                valid = false;
                break;
            }

            n /= 10;
            remainder = 1;
        }

        if (n > 1) {
            valid = false;
        }

        cout << (valid ? "YES" : "NO") << endl;
    }
}