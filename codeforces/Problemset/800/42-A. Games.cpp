#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/268/A
int main () {
    int t;
    cin >> t;
    vector<int> homeArr;
    unordered_map<int, int> awayCnt;
    while (t--) {
        int home, away;
        cin >> home >> away;
        homeArr.push_back(home);
        awayCnt[away]++;
    }

    int res = 0;
    for (int i = 0 ; i < homeArr.size(); i++) {
        res += awayCnt[homeArr[i]];
    }
    cout << res << endl;
}