#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> arr;



        if (k % 2 == 1) {
            for (int i = 1 ; i <= n; i++) {
                // cout << "1" << endl;
                if (i != n) {
                    cout << n << " ";
                } else {
                    cout << n - 1 << " ";
                }
            }
            cout << endl;
        } else {
            for (int i = 1 ; i <= n; i++) {
                // cout << "1" << endl;
                if (i != 1) {
                    cout << 1 << " ";
                } else {
                    cout << n << " ";
                }
            }
            cout << endl;
        }
    }
}