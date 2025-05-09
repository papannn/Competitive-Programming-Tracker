#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/236/A
int main () {
    string s;
    cin >> s;

    vector<int> arr(26);
    for (int i = 0 ; i < s.length(); i++) {
        arr[s[i] - 'a']++;
    }

    int val = 0;
    for (int i = 0 ; i < arr.size(); i++) {
        if (arr[i] > 0) {
            val++;
        }
    }

    cout << (val % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;
}