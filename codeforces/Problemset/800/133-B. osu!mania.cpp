#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2009/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> arr;
        while (n--) {
            string s;
            cin >> s;
            arr.push_back(s);
        }

        for (int i = arr.size() - 1; i >= 0; i--) {
            for (int j = 0; j < arr[i].size(); j++) {
                if (arr[i][j] == '#') {
                    cout << j + 1 << " ";
                    break;
                }
            }
        }
        cout << endl;
    }
}