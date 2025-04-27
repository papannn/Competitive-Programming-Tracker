#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1370/A
void generate (vector<int>& arr) {
    for (int i = 1 ; i < arr.size(); i++) {
        for (int j = i ; j <= arr.size(); j += i) {
            if (j == i) {
                continue;
            }
            arr[j] = i;
        }
    }
}

int main () {
    int t;
    cin >> t;

    vector<int> arr (1e6 + 1);
    generate(arr);

    while (t--) {
        int n;
        cin >> n;
        int maxVal = -1;
        for (int i = 1; i <= n; i++) {
            maxVal = max(maxVal, arr[i]);
        }

        cout << maxVal << endl;
    }
}