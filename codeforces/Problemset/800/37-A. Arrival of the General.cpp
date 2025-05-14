#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/144/A
int main () {
    int t;
    cin >> t;
    vector<int> arr;
    while (t--) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    int maxIdx = -1;
    int maxVal = -1;
    for (int i = 0 ; i < arr.size(); i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIdx = i;
        }
    }

    int minIdx = -1;
    int minVal = 101;
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIdx = i;
        }
    }

    int diff = maxIdx > minIdx;
    int res = maxIdx + (arr.size() - 1 - minIdx) - diff;
    cout << res << endl;
}