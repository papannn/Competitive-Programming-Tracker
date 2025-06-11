#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1807/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mihai = 0, bianca = 0;
        while (n--) {
            int num;
            cin >> num;
            if (num % 2 == 1) {
                bianca += num;
            } else {
                mihai += num;
            }
        }

        cout << (mihai > bianca ? "YES" : "NO") << endl;
    }
}