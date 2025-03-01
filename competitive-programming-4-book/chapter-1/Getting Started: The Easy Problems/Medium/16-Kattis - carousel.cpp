#include <bits/stdc++.h>

using namespace std;
int main () {
    int n, m;
    while (cin >> n >> m) {
        if (n == 0) {
            break;
        }
        double minVal = 1e7;
        int amount = -1;
        int res = 0;
        while (n--) {
            int price;
            int cnt;
            cin >> cnt >> price;
            double value = (double) price / cnt;
            if (cnt > m) {
                continue;
            }
            if (value < minVal) {
                minVal = value;
                amount = cnt;
                res = price;
            } else if (value == minVal && cnt > amount) {
                amount = cnt;
                res = price;
            }
        }
        if (amount != -1) {
            cout << "Buy " << amount << " tickets for $" << res << endl;
        } else {
            cout << "No suitable tickets offered" << endl;
        }
    }
}