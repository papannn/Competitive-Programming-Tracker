#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1954/B
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;
        while (n--) {
            int num;
            cin >> num;
            arr.push_back(num);
        }

        int anchor = arr[0];
        int amt = -1;
        int res = arr.size();
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] != anchor) {
                res = min(res, i - amt - 1);
                amt = i;
            }
        }
        res = min(res, (int) arr.size() - amt - 1);

        if (res == arr.size()) {
            cout << -1 << endl;
        } else {
            cout << res << endl;
        }
    }
}