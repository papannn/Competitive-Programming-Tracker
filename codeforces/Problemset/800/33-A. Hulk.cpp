#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/705/A
int main () {
    int t;
    cin >> t;
    bool isHate = true;
    for (int i = 1; i <= t; i++) {
        if (isHate) {
            cout << "I hate ";
        } else {
            cout << "I love ";
        }


        if (i == t) {
            cout << "it" << endl;
        } else {
            cout << "that ";
        }
        isHate = !isHate;
    }
}