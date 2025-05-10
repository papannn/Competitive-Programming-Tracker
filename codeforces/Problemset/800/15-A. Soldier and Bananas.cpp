#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/546/A
int main () {
    long long k, n, w;
    cin >> k >> n >> w;
    long long totalPrice = w * (w + 1) / 2 * k;
    
    cout << (n >= totalPrice ? 0 : totalPrice - n) << endl;
}