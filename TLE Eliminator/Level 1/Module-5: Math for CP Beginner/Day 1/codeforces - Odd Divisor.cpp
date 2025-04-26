#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1475/A
int main () {
    int t;
    cin >> t;
    while (t--) {
        unsigned long long num;
        cin >> num;

        if (num == 2) {
            cout << "NO" << endl;
            continue;
        }

        if (num % 2 == 1) {
            cout << "YES" << endl;
            continue;
        }

        while (num % 2 == 0) {
            num /= 2;
        }

        if (num == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}