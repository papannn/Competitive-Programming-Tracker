#include <iostream>
#include <unordered_set>

using namespace std;
int main () {
    string s;
    cin >> s;
    for (int  i = 0 ; i < s.length(); i++) {
        if (i + 2 < s.length()) {
            unordered_set<char> set;
            set.insert(s[i]);
            set.insert(s[i + 1]);
            set.insert(s[i + 2]);
            if (set.size() == 3) {
                cout << "C";
                i += 2;
                continue;
            }
        }

        if (s[i] == 'R') {
            cout << "S";
        } else if (s[i] == 'B') {
            cout << "K";
        } else if (s[i] == 'L') {
            cout << "H";
        }
    }
    cout << endl;
}