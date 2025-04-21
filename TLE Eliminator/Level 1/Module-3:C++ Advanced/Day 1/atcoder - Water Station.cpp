#include <bits/stdc++.h>

using namespace std;
// https://atcoder.jp/contests/abc305/tasks/abc305_a
int main () {
    int n;
    cin >> n;
    
    int backward = 0;
    int forward = 0;
    int pos = n;
    while (pos % 5 != 0) {
        pos++;
        forward++;
    }

    pos = n;
    while (pos % 5 != 0) {
        pos--;
        backward++;
    }

    cout << (forward < backward ? n + forward : n - backward) << endl; 
}