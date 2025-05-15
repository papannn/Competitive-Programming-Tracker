#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/996/A
int main () {
    int n;
    cin >> n;
    int res = 0;
    vector<int> moneyArr = {100, 20, 10, 5, 1};
    int ptr = 0;
    while (n != 0) {
        if (n < moneyArr[ptr]) {
            ptr++;
            continue;
        }
        res += n / moneyArr[ptr];
        n %= moneyArr[ptr];
    }
    cout << res << endl;
}