#include <bits/stdc++.h>

using namespace std;
// https://atcoder.jp/contests/abc241/tasks/abc241_b
int main () {
    int n, m;
    cin >> n >> m;

    unordered_map<long long, int> arrN;
    unordered_map<long long, int> arrM;

    while (n--) {
        long long num;
        cin >> num;
        arrN[num]++;
    }

    bool valid = true;
    while (m--) {
        long long num;
        cin >> num;
        if (arrN[num] == 0) {
            valid = false;
            break;
        }
        arrN[num]--;
    }

    cout << (valid ? "Yes" : "No") << endl;
}