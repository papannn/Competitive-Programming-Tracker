#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1676/B
// O(t * n)
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

        int minVal = arr[0];
        for (int i = 1 ; i < arr.size(); i++) {
            minVal = min(minVal, arr[i]);
        }

        int res = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            res += abs(minVal - arr[i]);
        }
        cout << res << endl;
    }
}