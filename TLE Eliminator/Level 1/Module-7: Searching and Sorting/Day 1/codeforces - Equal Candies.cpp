#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1676/B
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0 ; i < n; i++) {
            int num;
            cin >> num;
            arr.push_back(num);
        }

        int minVal = *min_element(arr.begin(), arr.end());
        int res = 0;
        for (int n : arr) {
            res += abs(minVal - n);
        }
        cout << res << endl;
    }
}