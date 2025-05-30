#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1829/B
// O(t * n)
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

        int ptr = 0;
        int maxVal = 0;
        while (ptr < arr.size()) {
            if (arr[ptr] == 0) {
                int val = 0;
                while (ptr < arr.size() && arr[ptr] != 1) {
                    val++;
                    ptr++;
                }
                maxVal = max(maxVal, val);
            }
            ptr++;
        }
        cout << maxVal << endl;
    }
}