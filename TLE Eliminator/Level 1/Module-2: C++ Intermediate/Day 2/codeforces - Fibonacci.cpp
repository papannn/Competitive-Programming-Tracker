#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
int main () {
    int n;
    cin >> n;
    long long a = 0;
    long long b = 1;

    for (int i = 1 ; i < n; i++) {
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << a << endl;
}