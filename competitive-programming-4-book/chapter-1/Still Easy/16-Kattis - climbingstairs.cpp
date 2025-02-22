#include <iostream>
#include <math.h>

// Will clean this code in the future, this code is sucks
using namespace std;
int main () {
    int n, r, k;
    cin >> n >> r >> k;
    int res = 0;
    if (k > r) {
        res += k;
        res += k - r;
        if (res < n) {
            // res += 2;
            double temp = (n - res);
            temp /= 2;
            temp = ceil(temp) * 2;
            res += temp;
        }
        res += r;
    } else {
        if (n > r) {
            double temp = (n - r);
            temp /= 2;
            temp = ceil(temp) * 2;
            res += temp;
            res += r * 2;
        } else {
            res += r * 2;
        }
    }

    cout << res << endl;
}