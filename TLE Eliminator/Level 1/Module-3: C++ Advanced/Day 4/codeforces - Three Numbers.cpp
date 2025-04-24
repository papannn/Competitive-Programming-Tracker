#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z
int main () {
    int limit, s;
    cin >> limit >> s;

    int res = 0;
    for (int i = 0 ; i <= limit; i++) {
        for (int j = 0 ; j <= limit; j++) {
            if (s - (i + j) >= 0 && s - (i + j) <= limit) {
                res++;
            }
        }
    }
    cout << res << endl;
}