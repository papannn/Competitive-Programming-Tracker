#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/266/B
int main () {
    int n, iter;
    cin >> n >> iter;
    string s;
    cin >> s;
    
    while (iter--) {
        for (int i = s.length() - 1; i >= 1; i--) {
            if (s[i] == 'G' && s[i - 1] == 'B') {
                swap(s[i], s[i - 1]);
                i--;
            }
        }
    }
    
    cout << s << endl;
}