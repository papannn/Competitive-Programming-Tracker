#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1850/C
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        vector<string> arr;
        for (int i = 0; i < 8; i++) {
            string s;
            cin >> s;
            arr.push_back(s);
        }

        int x = 0;
        int y = 0;
        bool found = false;
        for (int i = 0 ; i < 8; i++) {
            if (found) {
                break;
            }
            for (int j = 0; j < 8; j++) {
                if (isalpha(arr[i][j])) {
                    found = true;
                    x = i;
                    y = j;
                }
            }
        }

        while (x < 8 && isalpha(arr[x][y])) {
            cout << arr[x][y];
            x++;
        }
        cout << endl;
    }
}