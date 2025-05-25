#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/758/A
// O(n)
int main () {
    int t;
    cin >> t;
    vector<int> arr;
    int maxVal = 0;
    while (t--) {
        int num;
        cin >> num;
        maxVal = max(maxVal, num);
        arr.push_back(num);
    }

    int res = 0;
    for (int i = 0; i < arr.size(); i++) {
        res += maxVal - arr[i];
    }
    cout << res << endl;
}