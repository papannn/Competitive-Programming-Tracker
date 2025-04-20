#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1800/A
int main () {
    int t;
    cin >> t;
    while (t--) {
        int l;
        cin >> l;
        string s;
        cin >> s;

        if (tolower(s[0]) != 'm') {
            cout << "NO" << endl;
            continue;
        }

        char list[] = {'m', 'e', 'o', 'w'};
        int ptr1 = 0;
        int ptr2 = 1;

        bool valid = true;
        for (int i = 1 ; i < l; i++){ 
            char c = tolower(s[i]);
            if (c == list[ptr1]) {
                continue;
            }

            if (c == list[ptr2]) {
                if (ptr1 < 3) {
                    ptr1++;
                }

                if (ptr2 < 3) {
                    ptr2++;
                }
                continue;
            }
            
            valid = false;
            break;
        }

        cout << (ptr1 == 3 && valid ? "YES" : "NO") << endl;
    }
}