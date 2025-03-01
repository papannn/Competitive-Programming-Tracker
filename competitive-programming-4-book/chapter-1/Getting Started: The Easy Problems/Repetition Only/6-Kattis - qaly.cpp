#include <iostream>

using namespace std;
int main() {
    int t;
    cin >> t;
    double res = 0;
    while (t--) {
        double q, y;
        cin >> q >> y;
        res += q * y;
    }
    printf("%.3lf\n", res);
}