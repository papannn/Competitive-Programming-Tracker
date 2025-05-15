#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/443/A
int main () {
    string s;
    getline(cin, s);
    unordered_set<char> charSet;
    for (int i = 0 ; i < s.length(); i++) {
        if (isalpha(s[i])) {
            charSet.insert(s[i]);
        }
    }
    cout << charSet.size() << endl;
}