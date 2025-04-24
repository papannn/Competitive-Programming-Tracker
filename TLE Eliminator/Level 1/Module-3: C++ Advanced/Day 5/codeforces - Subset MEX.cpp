#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1406/A
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(101);
        while (n--) {
            int num;
            cin >> num;
            arr[num]++;
        }

        int res1 = -1;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] == 0) {
                res1 = i;
                break;
            }
        }

        int res2 = -1;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] <= 1) {
                res2 = i;
                break;
            }
        }

        cout << res1 + res2 << endl;
    }
}