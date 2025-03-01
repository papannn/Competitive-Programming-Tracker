#include <iostream>

using namespace std;

int main () {
    int n; // Not used
    cin >> n; // Not used

    string s[5];
    cin >> s[0] >> s[1] >> s[2] >> s[3] >> s[4];
    for (int i = 0 ; i < s[0].length() - 3; i += 4) {
        if (s[0].substr(i, 3).compare(".*.") == 0) {
            cout << 1;
        } else {
            if (s[3].substr(i, 3).compare("*..") == 0) {
                cout << 2;
            } else {
                cout << 3;
            }
        }
    }
    cout << endl;
}