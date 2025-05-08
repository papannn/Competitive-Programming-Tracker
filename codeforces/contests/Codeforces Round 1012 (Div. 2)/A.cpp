#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    
    while (t--) {
        long long x, y, a;
        cin >> x >> y >> a;

        if (x > a) {
            // cout << "A" << endl;
            cout << "NO" << endl;
            continue;
        }

        if (x + y > a) {
            // cout << "B" << endl;
            cout << "YES" << endl;
            continue;
        }

        // long double c = a / (x + y + x);
        // long double d = a / (x + y);
        // cout << c << endl;
        // cout << round(c) << endl;
        // cout << ceil(c) * (x + y + x) << endl;
        // cout << round(d) * (x + y) << endl;
        // if (round(d) * (x + y) > a) {
        //     cout << "YES" << endl;
        // } else {
        //     cout << "NO" << endl;
        // }

        long long first = (a + 1) / (x + y);
        // cout << first << endl;
        // cout << first * (x + y) << endl;
        // cout << first * (x + y) + x << endl;

        if (first * (x + y) > a) {
            cout << "YES" << endl;
        } else if (first * (x + y) + x > a) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
        /*
        3 a + b
        4 a + b + a
        6 a + b (2)
        7 a + b (2) + a
        9

        */
        // if (c)
        // if (a / (x + y + x) == 0) {
        //     // cout << "C" << endl;
        //     cout << "NO" << endl;
        //     continue;
        // }

        // cout << "D" << endl;
        // cout << "YES" << endl;

        // bool isNo = true;
        // while (a > -1) {
        //     if (isNo) {
        //         a -= x;
        //     } else {
        //         a -= y;
        //     }
        //     isNo = !isNo;
        // }

        // cout << (!isNo ? "NO" : "YES") << endl;

    }
}