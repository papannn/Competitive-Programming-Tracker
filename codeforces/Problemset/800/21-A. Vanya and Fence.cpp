#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/677/A
int main () {
    int n, h;
    cin >> n >> h;
    int res = n;
    while (n--) {
        int num;
        cin >> num;
        if (num > h) {
            res++;
        }
    }
    cout << res << endl;
}