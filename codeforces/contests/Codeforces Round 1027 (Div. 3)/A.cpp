#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sqr = sqrt(n);
        if (sqr * sqr == n) {
            // cout << sqrt
            // cout << sqrt(n) * sqrt(n) << endl;
            // cout << n << endl;
            // cout << "A" << endl;
            cout << 0 << " " << sqrt(n) << endl;
        } else {
            cout << "-1" << endl;
        }
    }
}