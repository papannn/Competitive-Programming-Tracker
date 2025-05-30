#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1624/A
// O(t * max(a) - min(a))
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
        int maxVal = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            minVal = min(minVal, arr[i]);
            maxVal = max(maxVal, arr[i]);
        }

        cout << maxVal - minVal << endl;
    }
}