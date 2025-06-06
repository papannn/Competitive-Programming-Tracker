#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/707/A
// O(n * m)
int main () {
    int n, m;
    cin >> n >> m;
    unordered_set<char> setVal;
    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;
            setVal.insert(c);
        }
    }

    cout << (setVal.find('C') == setVal.end() && setVal.find('M') == setVal.end() && setVal.find('Y') == setVal.end() ? "#Black&White" : "#Color") << endl;
}