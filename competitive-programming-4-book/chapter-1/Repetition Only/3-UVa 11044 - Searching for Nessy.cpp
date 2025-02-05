#include <iostream>
#include <math.h>

using namespace std;
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0 ; i < t; i++) {
        long long n, m;
        scanf("%lld %lld", &n, &m);
        int res = ceil((double) (n-2) / 3) * ceil((double) (m - 2) / 3);
        
        printf("%d\n", res);
    }
}