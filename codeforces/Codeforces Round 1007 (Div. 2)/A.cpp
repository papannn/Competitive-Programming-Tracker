#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;

    while (t--) {
        long long match;
        cin >> match;

        if (match == 1) {
            cout << "YES" << endl;
            continue;
        }

        if (match % 3 != 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}