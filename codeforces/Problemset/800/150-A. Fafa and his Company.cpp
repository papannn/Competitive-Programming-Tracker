#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/935/A
// O(sqrt(n))
int main () {
    int n;
    cin >> n;
    int res = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            res++;
            if (n / i != i && n / i < n) res++;
        }
    }
    cout << res << endl;
}