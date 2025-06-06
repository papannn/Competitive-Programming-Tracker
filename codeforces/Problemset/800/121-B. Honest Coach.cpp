#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1360/B
// O(t * n log n)
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
        sort(arr.begin(), arr.end());
        int gap = 1000;
        for (int i = 0; i < arr.size() - 1; i++) {
            gap = min(gap, abs(arr[i] - arr[i + 1]));
        }
        cout << gap << endl;
    }
}