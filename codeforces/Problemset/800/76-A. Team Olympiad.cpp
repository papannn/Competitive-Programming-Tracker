#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/490/A
// O(n)
int main () {
    int t;
    cin >> t;
    vector<vector<int>> arr(4);
    int idx = 1;
    while (t--) {
        int num;
        cin >> num;
        arr[num].push_back(idx++);
    }

    int minVal = min(arr[1].size(), min(arr[2].size(), arr[3].size()));
    cout << minVal << endl;
    for (int i = 0 ; i < minVal; i++) {
        cout << arr[1][i] << " " << arr[2][i] << " " << arr[3][i] << endl;
    }
}