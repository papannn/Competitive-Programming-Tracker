#include <bits/stdc++.h>

using namespace std;
// https://cses.fi/problemset/task/1713

void precompute(vector<int>& arr) {
    for (int i = 1; i <= 1000000; i++) {
        for (int j = i; j <= 1000000; j += i) {
            arr[j]++;
        }
    }
}

int main () {
    int t;
    cin >> t;

    vector<int> arr(1e6 + 1);
    precompute(arr);
    while (t--) {
        int num;
        cin >> num;
        cout << arr[num] << endl;
    }
}