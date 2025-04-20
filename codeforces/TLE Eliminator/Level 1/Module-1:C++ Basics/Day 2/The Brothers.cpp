#include <bits/stdc++.h>

using namespace std;
int main () {
    string s, lastName1, lastName2;
    cin >> s >> lastName1;
    cin >> s >> lastName2;
    cout << (lastName1.compare(lastName2) == 0 ? "ARE Brothers" : "NOT") << endl;
}