#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1878/A
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

        unordered_map<int, int> mapping;
        for (int i = 0 ; i < arr.size(); i++) {
            mapping[arr[i]]++;
        }

        cout << (mapping[k] != 0 ? "YES" : "NO") << endl;
    }
}