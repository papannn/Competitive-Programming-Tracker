#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/486/A
int main () {
    long long n;
    cin >> n;
    long long totalEven = n / 2 * (n / 2 + 1);
    long long totalOdd = ceil(n / 2.0);
    totalOdd *= totalOdd;
    totalOdd *= -1;
    cout << totalEven + totalOdd << endl;
}