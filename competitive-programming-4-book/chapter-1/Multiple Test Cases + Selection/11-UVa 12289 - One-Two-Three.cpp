#include <iostream>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.length() == 5) {
            cout << 3 << endl;
            continue;
        }

        if (s.at(0) == 'o' || s.at(1) == 'n') {
            cout << 1 << endl;
            continue;
        }

        cout << 2 << endl;
    }

}