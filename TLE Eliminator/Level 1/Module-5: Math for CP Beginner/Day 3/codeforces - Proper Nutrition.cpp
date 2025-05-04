#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/898/B
int main () {
    long long n, a, b;
    cin >> n;
    cin >> a;
    cin >> b;

    if (a == 1) {
        cout << "YES" << endl;
        cout << n << " " << 0 << endl;
        return 0;
    }

    if (b == 1) {
        cout << "YES" << endl;
        cout << 0 << " " << n << endl;
        return 0;
    }

    if (n % a == 0) {
        cout << "YES" << endl;
        cout << n / a << " " << 0 << endl;
        return 0;
    }

    if (n % b == 0) {
        cout << "YES" << endl;
        cout << 0 << " " << n / b << endl;
        return 0;
    }

    for (int i = 1; n - i * a > 0; i++) {
        if ((n - i * a) % b == 0) {
            cout << "YES" << endl;
            cout << i << " " << (n - i * a) / b << endl;
            return 0;
        }
    }

    for (int i = 1; n - i * b > 0; i++) {
        if ((n - i * b) % a == 0) {
            cout << "YES" << endl;
            cout << (n - i * b) / a << " " << i << endl;
            return 0;
        }
    }

    cout << "NO" << endl;    
}