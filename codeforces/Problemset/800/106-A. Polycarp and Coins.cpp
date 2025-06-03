#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1551/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int num;
        cin >> num;
        if (num % 3 == 0) {
            cout << num / 3 << " " << num / 3 << endl;
        } else {
            if ((num / 3 + 1) + (num / 3) * 2 == num) {
                cout << (num / 3 + 1) << " " << (num / 3) << endl;
            } else {
                cout << (num / 3) << " " << ((num / 3) + 1) << endl;
            }
        }
    }
}