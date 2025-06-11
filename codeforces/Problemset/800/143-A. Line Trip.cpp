#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1901/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr;
        while (n--) {
            int num;
            cin >> num;
            arr.push_back(num);
        }

        int pos = 0;
        int maxDist = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            maxDist = max(maxDist, abs(arr[i] - pos));
            pos = arr[i];
        }
        maxDist = max(maxDist, abs(arr[arr.size() - 1] - x) * 2);
        cout << maxDist << endl;
    }
}