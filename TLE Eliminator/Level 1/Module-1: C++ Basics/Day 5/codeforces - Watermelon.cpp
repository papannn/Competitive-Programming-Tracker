#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/4/A
int main () {
    int x;
    cin >> x;
    if (x % 2 == 1) { // Odd
        cout << "NO" << endl;
    } else  if (x % 2 == 0 && x != 2) { // Odd and not 2
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}