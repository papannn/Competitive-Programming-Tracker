#include <bits/stdc++.h>

using namespace std;
int main () {
    int m, n;
    while (cin >> m >> n) {
        if (m == 0 && n == 0) {
            break;
        }

        if (m == 0 || n == 0) {
            printf("%d knights may be placed on a %d row %d column board.\n", 0, m, n);
            continue;
        }

        if (m == 1 && n == 1) {
            printf("%d knights may be placed on a %d row %d column board.\n", 1, m, n);
            continue;
        }

        if (m == 1 || n == 1) {
            printf("%d knights may be placed on a %d row %d column board.\n", max(m, n), m, n);
            continue;
        }

        if (m == 2 || n == 2) {
            int a = m == 2 ? m : n;
            int b = a == m ? n : m;
            int sum = 0;
            for (int i = 0 ; i < b; i++) {
                if (i % 4 == 0 || i % 4 == 1) {
                    sum += 2;
                }
            }
            printf("%d knights may be placed on a %d row %d column board.\n", sum, m, n);
            continue;
        }

        int a, b, delta;
        if (m % 2 == 1 || n % 2 == 1) {
            a = m % 2 == 1 ? m : n;
            b = a == m ? n : m;
            delta = -1;
            a = a / 2 + 1;
        } else {
            a = m;
            b = n;
            delta = 0;
            a = a / 2;
        }
        
        int sum = 0;
        for (int i = 0 ; i < b; i++) {
            sum += a;
            a += delta;
            delta *= -1;
        }
        printf("%d knights may be placed on a %d row %d column board.\n", sum, m, n);
    }
}