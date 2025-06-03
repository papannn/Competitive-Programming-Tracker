#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1472/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(3);
        while (n--) {
            int num;
            cin >> num;
            arr[num]++;
        }

        if (arr[2] % 2 == 0 && arr[1] % 2 == 0) {
            cout << "YES" << endl;
        } else if (arr[2] % 2 == 1 && arr[1] % 2 == 0 && arr[1] > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}