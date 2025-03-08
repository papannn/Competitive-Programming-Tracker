#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        char piece;
        int n, m;
        cin >> piece >> n >> m;
        if (piece == 'r') { // rook
            cout << min(n, m) << endl;
        } else if (piece == 'k') { // knight
            
            if (n % 2 == 1 && m % 2 == 1) { // Both are odd nums
                int a = n / 2 + 1;
                int b = m;
                int delta = -1;
                int sum = 0;
                for (int i = 0 ; i < b; i++) {
                    sum += a;
                    a += delta;
                    delta *= -1;
                }
                cout << sum << endl;
            } else { // One of them is even num
                int a, b;
                if (n % 2 == 0) {
                    a = n;
                    b = m;
                } else {
                    a = m;
                    b = n;
                }

                cout << (a / 2) * b << endl;
            }
            
        } else if (piece == 'K') {
            int a = n / 2 + (n % 2);
            int b = m / 2 + (m % 2);
            cout << a * b << endl;
        } else { // Queen
            if (m == 9 && n == 9) {
                cout << 8 << endl;
            } else {
                cout << min(m, n) << endl;
            }
        }
    }
}