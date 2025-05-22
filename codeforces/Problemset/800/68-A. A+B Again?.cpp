#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1999/A
// O(1)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int num;
        cin >> num;
        int a = num % 10;
        num /= 10;
        cout << a + num << endl;
    }
}