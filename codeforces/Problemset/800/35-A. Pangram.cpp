#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/520/A
int main () {
    int t;
    cin >> t;
    string s;
    cin >> s;
    unordered_set<char> mapping;
    for (int i = 0 ; i < s.length(); i++) {
        mapping.insert(tolower(s[i]));
    }
    
    cout << (mapping.size() == 26 ? "YES" : "NO") << endl;
}