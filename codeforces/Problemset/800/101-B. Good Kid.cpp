#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1873/B
// O(n)
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
        int idx = 0;
        int lowest = arr[0];
        for (int i = 1 ; i < arr.size(); i++) {
            if (arr[i] < lowest) {
                lowest = arr[i];
                idx = i;
            }
        }

        arr[idx]++;
        long long res = 1;
        for (int i = 0 ; i < arr.size(); i++) {
            res *= arr[i];
        }
        cout << res << endl;
    }
}