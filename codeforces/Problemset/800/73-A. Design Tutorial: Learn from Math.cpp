#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/472/A
// O(n log log n)
int main () {
    vector<int> arr(1e6 + 1);
    for (int i = 2 ; i * i <= 1e6; i++) {
        if (arr[i] == 0) {
            for (int j = i * i; j <= 1e6; j += i) {
                arr[j] = 1;
            }
        }
    }

    int n;
    cin >> n;
    for (int i = 4; i <= n; i++) {
        if (arr[i] == 1 && arr[n - i] == 1) {
            cout << i << " " << n - i << endl;
            break;
        }
    }
}