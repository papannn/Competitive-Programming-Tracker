#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1343/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n / 2 % 2 == 1) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        int num = 2;
        int sumEven = 0;
        for (int i = 0; i < n / 2; i++) {
            cout << num << " ";
            sumEven += num;
            num += 2;
        }

        num = 1;
        int sumOdd = 0;
        for (int i = 0; i < n / 2 - 1; i++) {
            cout << num << " ";
            sumOdd += num;
            num += 2;
        }

        while (sumOdd + num < sumEven) {
            num += 2;
        }
        cout << num;
        cout << endl;
    }
}