#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/151/A
int main () {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int lime = c * d;
    int drink = k * l / nl;
    int salt = p / np;
    cout << min(salt, min(lime, drink)) / n << endl;
}