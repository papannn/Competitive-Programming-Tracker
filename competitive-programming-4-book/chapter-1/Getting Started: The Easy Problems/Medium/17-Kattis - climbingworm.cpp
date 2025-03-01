#include <bits/stdc++.h>

using namespace std;
int main () {
    int a, b, h;
    cin >> a >> b >> h;
    int pos = 0;
    int day = 0;
    while (pos < h) {
        day++;
        pos += a;
        if (pos >= h) {
            break;
        }

        pos -= b;
    }
    cout << day << endl;
}