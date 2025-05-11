#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/110/A
int main () {
    long long n;
    cin >> n;
    int res = 0;
    while (n) {
        if (n % 10 == 7 || n % 10 == 4) {
            res++;
        }
        n /= 10;
    }
    cout << (res == 7 || res == 4 ? "YES" : "NO") << endl;
}
