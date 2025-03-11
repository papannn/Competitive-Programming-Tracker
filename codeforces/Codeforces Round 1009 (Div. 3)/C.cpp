#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long num;
        cin >> num;
        long long start = 1;
        long long res = -1;
        while (start < num) {
            long long c = num ^ start;
            if (num + start > c && num + c > start && start + c > num) {
                res = start;
                break;
            }

            start = start << 1;
            start++;
        }
        cout << res << endl;
    }
}