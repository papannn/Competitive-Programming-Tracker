#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/405/A
int main () {
    int t;
    cin >> t;
    vector<int> arr;
    while (t--) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());
    for (int n : arr) {
        cout << n << " ";
    }
    cout << endl;
}