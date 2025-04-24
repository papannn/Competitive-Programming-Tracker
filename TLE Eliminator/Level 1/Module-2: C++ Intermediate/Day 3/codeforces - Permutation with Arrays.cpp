#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R
int main () {
    int t;
    cin >> t;
    vector<int> arrA(10000001);
    vector<int> arrB(10000001);

    for (int i = 0 ; i < t; i++) {
        int n;
        cin >> n;
        arrA[n]++;
    }

    for (int i = 0 ; i < t; i++) {
        int n;
        cin >> n;
        arrB[n]++;
    }

    bool valid = true;
    for (int i = 0 ; i < arrA.size(); i++) {
        if (arrA[i] != arrB[i]) {
            valid = false;
            break;
        }
    }

    cout << (valid ? "yes" : "no") << endl;
}