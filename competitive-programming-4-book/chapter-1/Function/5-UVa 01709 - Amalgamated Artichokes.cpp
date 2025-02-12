#include <iostream>
#include <math.h>

using namespace std;
int main () {
    double p, a, b, c, d;
    int n;
    while (cin >> p >> a >> b >> c >> d >> n) {
        double price[n];
        for (int i = 0 ; i < n ; i++) {
            price[i] = p * (sin(a * (i + 1) + b) + cos(c * (i + 1) + d) + 2);
        }

        double maxVal = price[0];
        double minVal = 0;
        for (int i = 1 ; i < n; i++) {
            minVal = min(minVal, price[i] - maxVal);
            maxVal = max(maxVal, price[i]);
        }

        printf("%.9lf\n", abs(minVal));
    }
}