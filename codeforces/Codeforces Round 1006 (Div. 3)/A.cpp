#include <iostream>
#include <math.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;

        // if (k == 0) {
        //     cout << 0 << endl;
        //     continue;
        // }

        int div = ceil((double) abs(k) / abs(p));
        if (div > n) {
            cout << -1 << endl;
        } else {
            cout << div << endl;
        }
    }
}