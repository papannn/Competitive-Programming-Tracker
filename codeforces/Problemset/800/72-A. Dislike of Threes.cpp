#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1560/A
// O(t)
int main () {
    int t;
    cin >> t;

    vector<int> arr;
    int i = 1;
    while (arr.size() != 1000) {
        if (i % 3 != 0 && i % 10 != 3) {
            arr.push_back(i);
        }
        i++;
    }

    while(t--) {
        int n;
        cin >> n;
        cout << arr[n - 1] << endl;
    }
}