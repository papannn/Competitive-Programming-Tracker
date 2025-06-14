#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1462/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &num : arr) cin >> num;

        int left = 0;
        int right = arr.size() - 1;
        bool isLeft = true;
        while (left <= right) {
            if (isLeft) {
                cout << arr[left++] << " ";
            } else {
                cout << arr[right--] << " ";
            }

            isLeft = !isLeft;
        }
        cout << endl;
    }
}