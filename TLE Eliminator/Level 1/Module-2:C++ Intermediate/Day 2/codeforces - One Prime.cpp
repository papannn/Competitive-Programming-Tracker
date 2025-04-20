#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
int main () {
    int n;
    cin >> n;
    if (n == 1) {
        cout << "NO" << endl;
        return 0;
    }
    
    bool valid = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            valid = false;
        }
    }

    cout << (valid ? "YES" : "NO") << endl;
}