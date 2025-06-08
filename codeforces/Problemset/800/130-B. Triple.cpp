#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1669/B
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

        unordered_map<int, int> mapping;
        int res = -1;
        for (int i = 0 ; i < arr.size(); i++) {
            mapping[arr[i]]++;
            if (mapping[arr[i]] == 3) {
                res = arr[i];
                break;
            }
        }
        cout << res << endl;
    }
}