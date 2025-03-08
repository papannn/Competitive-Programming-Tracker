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
            if (n <= 2 && m <= 2) {
                cout << n * m << endl; // TODO
            } else if (n + m == 5 && n == 3 || m == 3) {
                cout << 4 << endl;
            } else if (n <= 2 || m <= 2) {
                cout << max(n, m) << endl; // TODO
            } else {
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
            }
        } else { // Queen
            if (m == n) {
                if (m > 3) {
                    cout << m << endl;
                } else if (m == 3) {
                    cout << 2 << endl;
                } else if (m <= 2) {
                    cout << 1 << endl;
                }
            } else {
                cout << min(m, n) << endl;
            }
        }
    }
}