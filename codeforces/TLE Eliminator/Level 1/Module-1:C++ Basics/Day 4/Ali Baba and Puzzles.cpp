#include <bits/stdc++.h>

using namespace std;
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