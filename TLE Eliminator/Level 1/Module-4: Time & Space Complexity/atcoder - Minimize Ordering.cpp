#include <bits/stdc++.h>

using namespace std;
// https://atcoder.jp/contests/abc242/tasks/abc242_b
int main () {
    string s;
    cin >> s;
    vector<int> arr(26);
    for (char c : s) {
        arr[c - 'a']++;
    }

    for (int i = 0 ; i < arr.size(); i++) {
        while (arr[i]--) {
            cout << (char) (i + 'a');
        }
    }
    cout << endl;
}