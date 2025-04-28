#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1954/B
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

        int anchor = arr[0];
        int first = arr.size();
        int second = arr.size();
        int mid = arr.size();
        bool isFirst = true;
        for (int i = 0; i < arr.size(); i++) {
            if (isFirst) {
                if ()
            } else {

            }
        }

        if (res1 == -1) {
            cout << -1 << endl;
        } else {
            cout << min((int) arr.size() - 1 - res1, res2) << endl;
        }
    }
}