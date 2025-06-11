#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/233/A
// O(n)
int main () {
    int n;
    cin >> n;

    if (n % 2 == 1) {
        cout << -1 << endl;
        return 0;
    }

    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) {
                continue;
            }

            if (arr[j] == 0) {
                arr[j] = i;
                break;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}