#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/758/A
int main () {
    int t;
    cin >> t;
    vector<int> arr;
    while (t--) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    int maxVal = 0;
    for (int i = 0 ; i < arr.size(); i++) {
        maxVal = max(maxVal, arr[i]);
    }

    int res = 0;
    for (int i = 0 ; i < arr.size(); i++) {
        res += maxVal - arr[i];
    }

    cout << res << endl;
}