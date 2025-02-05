#include <iostream>

int main() {

    int t;
    scanf("%d", &t);

    for (int i = 0 ; i < t; i++) {
        long long n;
        scanf("%lld", &n);

        int deduct = 1;
        while (n > 0) {
            n -= deduct;
            deduct++;
        }
        
        if (n < 0) {
            deduct--;
        }
        printf("%d\n", deduct - 1);
    }

    return 0;
}