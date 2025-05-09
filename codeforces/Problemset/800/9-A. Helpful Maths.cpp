#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/339/A
int main () {
    string s;
    cin >> s;
    vector<int> arr(4);
    for (int i = 0 ; i < s.length(); i += 2) {
        arr[s[i] - '0']++;
    }

    bool first = true;
    while (arr[1]--) {
        if (!first) {
            cout << "+";
        }
        cout << 1;
        first = false;
    }

    while (arr[2]--) {
        if (!first) {
            cout << "+";
        }
        cout << 2;
        first = false;
    }

    while (arr[3]--) {
        if (!first) {
            cout << "+";
        }
        cout << 3;
        first = false;
    }
    cout << endl;
}