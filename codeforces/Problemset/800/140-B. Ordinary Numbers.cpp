#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1520/B
// O(t * 10logn)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num = n;
        int digitCnt = 0;
        int lastDigit = n % 10;
        bool sameDigit = true;
        n /= 10;
        while (n != 0) {
            digitCnt++;
            int currDigit = n % 10;
            n /= 10;
            lastDigit = currDigit;
        }

        int tot = lastDigit;
        for (int i = 0; i < digitCnt; i++) {
            tot *= 10;
            tot += lastDigit;
        }

        int res = digitCnt * 9;
        res += lastDigit - 1;

        res += num >= tot;
        cout << res << endl;
    }
}