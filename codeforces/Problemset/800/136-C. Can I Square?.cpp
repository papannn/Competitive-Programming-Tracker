#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1915/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long sum = 0;
        while (n--) {
            int num;
            cin >> num;
            sum += num;
        }

        long long sqrtVal = sqrt(sum);
        cout << (sqrtVal * sqrtVal == sum ? "YES" : "NO") << endl;
    }
}