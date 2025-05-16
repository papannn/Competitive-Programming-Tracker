#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/750/A
// O(1)
int main () {
    int n, k;
    cin >> n >> k;
    int hour = 4 * 60;
    hour -= k;
    int amt = 0;
    while (true) {
        amt++;
        hour -= 5 * amt;
        if (hour < 0) {
            amt--;
            break;
        }
    }
    
    cout << (amt > n ? n : amt) << endl;
}