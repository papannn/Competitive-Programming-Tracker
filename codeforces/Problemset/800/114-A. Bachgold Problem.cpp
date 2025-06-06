#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/749/A
// O(n)
int main () {
    int n;
    cin >> n;
    vector<int> res;
    while (n > 0) {
        if (n - 2 == 1) {
            res.push_back(3);
            n -= 3;
        } else {
            res.push_back(2);
            n -= 2;
        }
    }
    cout << res.size() << endl;
    for (int i = 0 ; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
}