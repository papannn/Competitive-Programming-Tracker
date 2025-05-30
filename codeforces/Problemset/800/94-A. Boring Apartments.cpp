#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1433/A
// O(t)
int getVal(int n) {
    if (n == 1) {
        return 1;
    }

    if (n > 9) {
        return getVal(n / 10) + ceil(log10(n));
    }
    
    n--;
    int newN = n;
    newN *= 10; newN += n;
    newN *= 10; newN += n;
    newN *= 10; newN += n;
    return getVal(newN) + 1;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << (getVal(n)) << endl;
    }
}