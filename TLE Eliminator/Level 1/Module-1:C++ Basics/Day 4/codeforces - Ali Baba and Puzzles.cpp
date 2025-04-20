#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D
int main () {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    bool res = false;
    res |= a + b - c == d;
    res |= a + b * c == d;

    res |= a - b + c == d;
    res |= a - b * c == d;

    res |= a * b + c == d;
    res |= a * b - c == d;
    cout << (res ? "YES" : "NO") << endl;
}