#include <bits/stdc++.h>

using namespace std;
int main () {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long res = 0;
        // 0 0 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1 1 1 2 2 2 2 2 2 2 2 2 2 3 3 3 3 3 3 3 3 3 3 4 4 4 4 4 4 4 4 4
        // 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8
        // 0 1 2 0 1 2 0 1 2 0 1 2 0 1 2 0 1 2 0 1 2 0 1 2 0 1 2 0 1 2 0 1 2 0 1 2 0 1 2 0 1 2 0 1 2 0 1 2 0
        // 0 1 2 3 4 0 1 2 3 4 0 1 2 3 4 0 1 2 3 4 0 1 2 3 4 0 1 2 3 4 0 1 2 3 4 0 1 2 3 4 0 1 2 3 4 0 1 2 3
        // if (n / )
        if (n < 15) {
            if (n == 0) {
                cout << 1 << endl;
            }

            if (n == 1) {
                cout << 2 << endl;
            }

            if (n >= 2) {
                cout << 3 << endl;
            }
        } else {
            long long div = 3 * (n / 15);
            if (n - n / 15 * 15 == 0) {
                div += 1;
            }

            if (n - n / 15 * 15 == 1) {
                div += 2;
            }

            if (n - n / 15 * 15  >= 2) {
                div += 3;
            }
            cout << div << endl;
        }
        
        // for (int i = 0 ; i <= n; i++) {
        //     long long mod3 = i % 3;
        //     long long mod5 = i % 5;
        //     res += mod3 == mod5;
        // }
        // cout << res << endl;
    }
}