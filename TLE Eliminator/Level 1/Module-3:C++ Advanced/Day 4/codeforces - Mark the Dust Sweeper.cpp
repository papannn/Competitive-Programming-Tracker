#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1705/B
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> arr;
        for (int i = 0 ; i < n; i++) {
            long long num;
            cin >> num;
            arr.push_back(num);
        }

        int ptr = -1;
        for (int i = 0 ; i < n - 1; i++) {
            if (arr[i] != 0) {
                ptr = i;
                break;
            }
        }

        if (ptr != -1) {
            long long res = 0;
            for (int i = ptr; i < n - 1; i++) {
                if (arr[i] == 0) {
                    res++;
                } else {
                    res += arr[i];
                }
            }
            cout << res << endl;
        } else {
            cout << 0 << endl;
        }
    }
}