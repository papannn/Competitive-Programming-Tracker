#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/200/B
int main () {
    int t;
    cin >> t;
    double tot = 0;
    for (int i = 0 ; i < t; i++) {
        int n;
        cin >> n;
        tot += n;
    }
    cout << tot / t << endl;
}