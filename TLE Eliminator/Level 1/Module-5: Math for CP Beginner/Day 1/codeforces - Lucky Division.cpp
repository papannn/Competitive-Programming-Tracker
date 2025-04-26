#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/122/A
int main () {
    int n;
    cin >> n;
    vector<int> luckyList = {4, 44, 444, 7, 77, 777, 47, 74, 477, 447, 474, 744, 774, 747};
    bool valid = false;
    for (int lucky : luckyList) {
        valid |= n % lucky == 0;
    }
    cout << (valid ? "YES" : "NO") << endl;
}