#include <iostream>
#include <math.h>

using namespace std;
int main() {
    int N;
    scanf("%d", &N);
    long long res = (pow(2, N) + 1) * (pow(2, N) + 1);
    printf("%lld\n", res);
}