#include <iostream>
#include <math.h>

int main() {
    long long a, b;
    while (scanf("%lld %lld", &a, &b) != EOF) {
        printf("%lld\n", abs(b - a));
    }
}