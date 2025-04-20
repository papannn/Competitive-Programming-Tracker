#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J
int main () {
    int a, b;
    cin >> a >> b;
    cout << (a % b == 0 || b % a == 0 ? "Multiples" : "No Multiples") << endl;
}