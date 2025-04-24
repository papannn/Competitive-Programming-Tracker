#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/808/A
int main () {
    long long n;
    long long mult = 1;
    cin >> n;

    long long num = n;
    while (n >= 10) {
        n /= 10;
        mult *= 10;
    }

    cout << (n + 1) * mult - num << endl;
}