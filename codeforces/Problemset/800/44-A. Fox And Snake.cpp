#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/510/A
int main () {
    int r, c;
    cin >> r >> c;
    bool flag = true;
    for (int i = 0 ; i < r; i++) {  
        if (i % 2 == 0) {
            for (int j = 0; j < c; j++) {
                cout << "#";
            }
            cout << endl;
        } else {
            if (!flag) {
                cout << "#";
            }

            for (int j = 0; j < c - 1; j++) {
                cout << ".";
            }

            if (flag) {
                cout << "#";
            }
            cout << endl;
            flag = !flag;
        }
    }
}