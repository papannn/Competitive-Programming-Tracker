#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1399/A
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
        sort(arr.begin(), arr.end());

        bool valid = true;
        for (int i = 0 ; i < arr.size() - 1; i++) {
            if (abs(arr[i] - arr[i + 1]) > 1) {
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}