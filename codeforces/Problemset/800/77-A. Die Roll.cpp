#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/9/A
// O(1)
int main () {
    int a, b;
    cin >> a >> b;
    int maxVal = max(a, b);
    if (maxVal == 1) {
        cout << "1/1" << endl;
    } else if (maxVal == 2) {
        cout << "5/6" << endl;
    } else if (maxVal == 3) {
        cout << "2/3" << endl;
    } else if (maxVal == 4) {
        cout << "1/2" << endl;
    } else if (maxVal == 5) {
        cout << "1/3" << endl;
    } else {
        cout << "1/6" << endl;
    }
}