#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;

    while (t != 0) {
        int tc = t;
        int midX, midY;
        cin >> midX >> midY;

        while (tc--) {
            int x, y;
            cin >> x >> y;
            if (x == midX || y == midY) {
                cout << "divisa" << endl;
                continue;
            }

            if (x > midX && y > midY) {
                cout << "NE" << endl;
                continue;
            }

            if (x > midX && y < midY) {
                cout << "SE" << endl;
                continue;
            }

            if (x < midX && y > midY) {
                cout << "NO" << endl;
                continue;
            }

            if (x < midX && y < midY) {
                cout << "SO" << endl;
                continue;
            }
        }
        cin >> t;
    }
}