#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/469/A
int main () {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    int p;
    cin >> p;
    for (int i = 0 ; i < p; i++) {
        int num;
        cin >> num;
        arr[num] = 1;
    }

    cin >> p;
    for (int i = 0 ; i < p; i++) {
        int num;
        cin >> num;
        arr[num] = 1;
    }

    bool valid = true;
    for (int i = 1; i <= n; i++) {
        if (arr[i] == 0) {
            valid = false;
            break;
        }
    }
    cout << (valid ? "I become the guy." : "Oh, my keyboard!") << endl;
}