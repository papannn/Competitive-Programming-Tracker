#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1399/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arrA;
        vector<int> arrB;
        for (int i = 0 ; i < n; i++) {
            int num;
            cin >> num;
            arrA.push_back(num);
        }

        for (int i = 0 ; i < n; i++) {
            int num;
            cin >> num;
            arrB.push_back(num);
        }

        int minValA = 1e9 + 1;
        int minValB = 1e9 + 1;
        for (int i = 0 ; i < arrA.size(); i++) {
            minValA = min(minValA, arrA[i]);
        }

        for (int i = 0 ; i < arrB.size(); i++) {
            minValB = min(minValB, arrB[i]);
        }

        long long res = 0;
        for (int i = 0 ; i < n; i++) {
            res += max(abs(minValA - arrA[i]), abs(minValB - arrB[i]));
        }
        cout << res << endl;
    }
}