#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/977/A
int main () {
    long long n, k;
    cin >> n >> k;
    while (k--) {
        if (n % 10 == 0) {
            n /= 10;
        } else {
            n--;
        }
    }
    cout << n << endl;
}