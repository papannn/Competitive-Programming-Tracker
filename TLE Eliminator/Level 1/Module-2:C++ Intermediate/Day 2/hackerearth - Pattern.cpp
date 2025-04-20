#include <bits/stdc++.h>

using namespace std;
// https://www.hackerearth.com/problem/algorithm/pattern/
int main () {
    int  n;
    cin >> n;

    for (int i = 0 ; i < n; i++) {
        if (i == 0 || i == n - 1) {
            for (int k = 0 ; k < n; k++) {
                cout << "*";
            }
            cout << endl;
            continue;
        }

        for (int j = i; j < n - 1; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
}