#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (n % 2 == 0) { // N is even
            long long res = ceil((double) n / (k - (k % 2)));
            cout << res << endl;
        } else { // N is odd
            double temp = n;
            temp -= k;
            long long res = ceil(temp / (k - (k % 2))) + 1;
            cout << res << endl;
        }
    }
}