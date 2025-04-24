#include <bits/stdc++.h>

using namespace std;
// https://atcoder.jp/contests/abc263/tasks/abc263_a
int main () {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    unordered_map<int, int> mapping;
    mapping[a]++;
    mapping[b]++;
    mapping[c]++;
    mapping[d]++;
    mapping[e]++;

    if (mapping.size() == 2) {
        int reduce = 5;
        reduce -= mapping[a];
        if (reduce == 3 || reduce == 2) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        cout << "No" << endl;
    }
}