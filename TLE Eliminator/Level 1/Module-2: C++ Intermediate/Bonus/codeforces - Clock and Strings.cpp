#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1971/C
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        bool backward = false;
        bool forward = false;
        
        int ptr = a;
        while (ptr != b) {
            if (ptr == c || ptr == d) {
                forward = true;
            }

            ptr++;
            if (ptr == 13) {
                ptr = 1;
            }
        }

        ptr = a;
        while (ptr != b) {
            if (ptr == c || ptr == d) {
                backward = true;
            }

            ptr--;
            if (ptr == 0) {
                ptr = 12;
            }
        }

        cout << (backward && forward ? "YES" : "NO") << endl;
    }
}