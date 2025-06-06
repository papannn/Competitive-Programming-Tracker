#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1873/C
// O(1)
int main () {
    int t;
    cin >> t;
    while (t--) {
        vector<string> arr;
        for (int i = 0 ; i < 10; i++) {
            string s;
            cin >> s;
            arr.push_back(s);
        }

        int res = 0;
        for (int i = 0 ; i < 10; i++) {
            for (int j = 0 ; j < 10; j++) {
                if (arr[i][j] == 'X') {
                    int row = i >= 5 ? 9 - i : i;
                    int col = j >= 5 ? 9 - j : j;
                    res += min(row, col) + 1;
                }
            }
        }
        cout << res << endl;
    }
}