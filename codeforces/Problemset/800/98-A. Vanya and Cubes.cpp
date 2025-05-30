#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/492/A
// O(n ^ 1/3) idk why tf I can get this
int main () {
    int n;
    cin >> n;
    
    int res = 0;
    int totalCut = 0;
    for (int i = 1; ; i++) {
        totalCut += i;

        if (n < totalCut) {
            break;
        }

        n -= totalCut;
        res++;
    }
    cout << res << endl;
}