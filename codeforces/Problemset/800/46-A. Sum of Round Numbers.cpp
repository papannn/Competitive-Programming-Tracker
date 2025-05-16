#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1352/A
// O(log10(n))
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mult = 1;
        vector<int> res;
        while (n != 0) {
            int number = n % 10;
            n /= 10;
            number *= mult;
            mult *= 10;
            if (number != 0) {
                res.push_back(number);
            }
        }
        cout << res.size() << endl;
        for (int num : res) {
            cout << num << " ";
        }
        cout << endl;
    }
}