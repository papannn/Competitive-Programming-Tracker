#include <iostream>
#include <math.h>

using namespace std;
int main () {
    int a, b;
    cin >> a >> b;
    int flippedA = 0, flippedB = 0;
    while (a != 0) {
        flippedA *= 10;
        flippedA += a % 10;
        a /= 10;

        flippedB *= 10;
        flippedB += b % 10;
        b /= 10;
    }

    cout << max(flippedA, flippedB) << endl;
}