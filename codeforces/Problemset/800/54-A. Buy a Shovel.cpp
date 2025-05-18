#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/732/A
// O(1)
int main () {
    int k, r;
    cin >> k >> r;
    int temp = k;
    int res = 1;
    while (true) {
        if (k % 10 == r) {
            break;
        }

        if (k % 10 == 0) {
            break;
        }
        k += temp;
        res++;
    }

    cout << res << endl;
}