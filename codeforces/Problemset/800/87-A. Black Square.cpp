#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/431/A
// O(s)
int main () {
    vector<int> calArr(5);
    for (int i = 1; i <= 4; i++) {
        cin >> calArr[i];
    }

    string s;
    cin >> s;
    int res = 0;
    for (int i = 0; i < s.length(); i++) {
        res += calArr[s[i] - '0'];
    }
    cout << res << endl;
}