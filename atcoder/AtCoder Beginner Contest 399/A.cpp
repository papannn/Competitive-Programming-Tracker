#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    string s, t;
    cin >> n;
    cin >> s;
    cin >> t;

    int counter = 0;
    for (int i = 0 ; i < s.length(); i++) {
        if (s[i] != t[i]) {
            counter++;
        }
    }
    cout << counter << endl;
}