#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/785/A
int main () {
    int t;
    cin >> t;
    unordered_map<string, int> mapping = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };
    int res = 0;
    while (t--) {
        string s;
        cin >> s;
        res += mapping[s];
    }
    cout << res << endl;
}