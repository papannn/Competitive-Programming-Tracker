#include<iostream>

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        int N, K, P;
        scanf("%d %d %d", &N, &K, &P);
        printf("Case %d: %d\n", i, (K + P) % N == 0 ? N : (K + P) % N);
    }

    return 0;
}