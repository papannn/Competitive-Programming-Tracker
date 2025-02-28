#include <bits/stdc++.h>

using namespace std;
int main () {
    string s;
    cin >> s;
    string curr = "AHOW";
    while (curr.length() <= s.length()) {
        curr += 'O';
    }
    cout << curr << endl;
}