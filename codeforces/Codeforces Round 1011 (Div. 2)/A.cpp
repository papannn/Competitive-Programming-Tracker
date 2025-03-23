#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        if (n <= 2) {
            cout << "No" << endl;
            continue;
        }

        string rev = string(s.rbegin(), s.rend());
        bool uni = false;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == rev[i]) {
                continue;
            }
            uni = s[i] < rev[i];
            break;
        }

        if (uni || k == 0) {
            cout << (uni ? "Yes" : "No") << endl;
            continue;
        }

        for (int i = 0 ; i < s.length(); i++) {
            if (uni) {
                break;
            }
            // cout << s[i] << endl;
            string rev = string(s.rbegin(), s.rend());
            // if (s[i] == rev[i]) {
            //     continue;
            // }
            
            if (s[i] < rev[i]) {
                uni = true;
                break;
            }
            if (s[i] >= rev[i]) {
                if (k == 0) {
                    uni = false;
                    break;
                }

                int minVal = 1e7;
                int pos = -1;
                for (int j = i + 1; j < s.length() - i - 1; j++) {
                    if (s[j] - 'a' <= rev[i] - 'a' && s[j] - 'a' < minVal) {
                        minVal = s[j] - 'a';
                        pos = j;
                    }
                    // cout << s[j];
                }
                // cout << endl;

                if (pos != -1) {
                    if (s[pos] != s[i]) {
                        swap(s[pos], s[i]);
                        k--;
                    } 
                    
                    rev = string(s.rbegin(), s.rend());
                    if (s[i] == rev[i]) {
                        continue;
                    }
        
                    if (s[i] < rev[i]) {
                        uni = true;
                        break;
                    } else {
                        break;
                    }
                } else {
                    if (s[i] != rev[i]) {
                        uni = false;
                        break;
                    }
                        
                }
            }
            
            // cout << endl << endl;
        }
        // cout << endl;
        // cout << s << endl;
        // cout << string(s.rbegin(), s.rend()) << endl;

        cout << (uni ? "Yes" : "No") << endl;
    }
}