#include <iostream>
#include <math.h>

using namespace std;
int main() {
    double x, y;
    cin >> x >> y;

    if (x == 0 && y == 1) {
        printf("ALL GOOD\n");
    } else if (y == 1) {
        printf("IMPOSSIBLE\n");
    } else {
        y--;
        y *= -1;
        printf("%.7g\n", x / y);
    }
}