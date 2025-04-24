#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
int main () {
    int a, b;
    char comparison;
    cin >> a >> comparison >> b;
    bool res = false;
    if (comparison == '=') {
        res = a == b;
    } else if (comparison == '<') {
        res = a < b;
    } else {
        res = a > b;
    }

    cout << (res ? "Right" : "Wrong") << endl;
}