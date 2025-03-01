#include <iostream>

int main() {
    int X;
    int quota = 0;
    int t;

    scanf("%d", &X);
    scanf("%d", &t);

    while (t--) {
        quota += X;
        int P;
        scanf("%d", &P);
        quota -= P;
    }
    quota += X;
    printf("%d\n", quota);
}