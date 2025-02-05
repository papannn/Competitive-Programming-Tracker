#include <iostream>

int main() {
    int a,b,c,n;
    scanf("%d %d %d %d", &a, &b, &c, &n);
    bool eligible = true;
    if (a == 0) {
        eligible = false;
    }

    if (b == 0) {
        eligible = false;
    }

    if (c == 0) {
        eligible = false;
    }

    if ((a + b + c) < n) {
        eligible = false;
    }

    if (n < 3) {
        eligible = false;
    }
    
    if (eligible) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}