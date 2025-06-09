#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1542/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        n *= 2;
        vector<int> arr;
        while (n--) {
            int num;
            cin >> num;
            arr.push_back(num);
        }

        int res[] = {0, 0};
        for (int i = 0 ; i < arr.size(); i++) {
            res[arr[i] % 2]++;
        }
        cout << (res[0] == res[1] ? "Yes" : "No") << endl;
    }
}