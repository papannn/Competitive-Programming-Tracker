#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1857/A
// O(n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int odd = 0;
        int even = 0;
        while (n--) {
            int num;
            cin >> num;
            odd += num % 2 == 1;
            even += num % 2 == 0;
        }

        cout << (odd % 2 == 0 ? "YES" : "NO") << endl;
    }
}