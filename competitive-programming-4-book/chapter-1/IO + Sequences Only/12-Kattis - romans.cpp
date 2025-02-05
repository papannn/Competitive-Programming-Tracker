#include <iostream>
#include <math.h>
using namespace std;
int main() {
    long double miles;
    cin >> miles;
    long long res = round(miles * 1000 * 5280 / 4854);
    printf("%lld\n", res);
}