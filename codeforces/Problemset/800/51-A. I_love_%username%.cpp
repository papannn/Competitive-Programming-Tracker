#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/155/A
// O(n)
int main () {
    int t;
    cin >> t;
    vector<int> arr;
    while (t--) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    int minVal = arr[0];
    int maxVal = arr[0];
    int res = 0;
    for (int i = 1 ; i < arr.size(); i++) {
        if (arr[i] < minVal) {
            res++;
            minVal = arr[i];
        }

        if (arr[i] > maxVal) {
            maxVal = arr[i];
            res++;
        }
    }
    cout << res << endl;
}