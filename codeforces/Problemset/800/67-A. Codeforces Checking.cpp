#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1791/A
// O(1)
int main () {
    int t;
    cin >> t;
    unordered_set<char> s = {
        'c', 'o', 'd', 'e', 'f', 'o', 'r', 'c', 'e', 's'
    };
    while (t--) {
        char c;
        cin >> c;
        cout << (s.find(c) != s.end() ? "YES" : "NO") << endl;
    }
}