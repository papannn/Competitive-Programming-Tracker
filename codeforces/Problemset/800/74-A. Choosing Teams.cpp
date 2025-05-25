#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/432/A
// O(n)
int main () {
    int t, k;
    cin >> t >> k;
    vector<int> arr;
    int maxVal = 0;
    while (t--) {
        int num;
        cin >> num;
        if (num + k <= 5) {
            arr.push_back(num);
        }
    }
    cout << arr.size() / 3 << endl;
}