#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/581/A
// O(1)
int main () {
    int a, b;
    cin >> a >> b;
    int minVal = min(a, b);
    int maxVal = max(a, b);
    cout << minVal << " " << (maxVal - minVal) / 2 << endl;
}