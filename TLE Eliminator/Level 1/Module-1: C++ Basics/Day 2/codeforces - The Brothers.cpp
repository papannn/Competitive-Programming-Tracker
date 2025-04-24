#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L
int main () {
    string s, lastName1, lastName2;
    cin >> s >> lastName1;
    cin >> s >> lastName2;
    cout << (lastName1.compare(lastName2) == 0 ? "ARE Brothers" : "NOT") << endl;
}