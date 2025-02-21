#include <iostream>

using namespace std;
int main () {
    string s;
    int caseCount = 1;
    while (cin >> s) {
        int query;
        cout << "Case " << caseCount++ << ":" << endl;
        cin >> query;
        while (query--) {
            int a, b;
            cin >> a >> b;
            char c = s[min(a, b)];
            bool valid = true;
            for (int i = min(a, b) + 1; i <= max(a, b); i++) {
                if (s[i] != c) {
                    valid = false;
                    break;
                }
            } 
            cout << (valid ? "Yes" : "No") << endl;
        }
    }
}