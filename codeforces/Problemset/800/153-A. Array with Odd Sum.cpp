#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1296/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &num : arr) cin >> num;

        int tot[] = {0, 0};
        for (int &num : arr) tot[num % 2]++;

        if (tot[1] % 2 == 0) {
            cout << (tot[0] > 0 && tot[1] > 0 ? "YES" : "NO") << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}