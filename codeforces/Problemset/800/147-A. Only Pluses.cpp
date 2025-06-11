#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1992/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        vector<int> arr(3);
        cin >> arr[0] >> arr[1] >> arr[2];
        for (int i = 0 ; i < 5; i++) {
            auto minEle = min_element(arr.begin(), arr.end());
            ++(*minEle);
        }
        
        int res = 1;
        for (int i = 0 ; i < arr.size(); i++) {
            res *= arr[i];
        }
        cout << res << endl;
    }
}