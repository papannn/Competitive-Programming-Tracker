#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/228/A
int main () {
    unordered_set<int> horseShoe;
    for (int i = 0 ; i < 4; i++) {
        int n;
        cin >> n;
        horseShoe.insert(n);
    }

    cout << 4 - horseShoe.size() << endl;
}