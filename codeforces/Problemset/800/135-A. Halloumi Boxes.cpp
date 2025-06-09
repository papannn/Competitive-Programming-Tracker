#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1903/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr;
        while (n--) {
            int num;
            cin >> num;
            arr.push_back(num);
        }

        bool isSorted = true;
        for (int i = 0 ; i < arr.size() - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                isSorted = false;
                break;
            }
        }

        cout << (isSorted || k > 1 ? "YES" : "NO") << endl;
    }
}