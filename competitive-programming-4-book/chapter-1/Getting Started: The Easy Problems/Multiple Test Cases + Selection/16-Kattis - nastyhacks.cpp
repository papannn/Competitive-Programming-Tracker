#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int r, e, c;
        cin >> r >> e >> c;
        if (r > e - c) {
            cout << "do not advertise" << endl;
        } else if (r < e - c) {
            cout << "advertise" << endl;
        } else {
            cout << "does not matter" << endl;
        }
    }
}