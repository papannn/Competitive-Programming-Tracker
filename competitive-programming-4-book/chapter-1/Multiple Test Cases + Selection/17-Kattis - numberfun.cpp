#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c) {
            cout << "Possible" << endl;
            continue;
        }

        if (abs(a - b) == c) {
            cout << "Possible" << endl;
            continue;
        }

        if (a * b == c) {
            cout << "Possible" << endl;
            continue;
        }
        
        if ((double) a / b == c || (double) b / a == c) {
            cout << "Possible" << endl;
            continue;
        }

        cout << "Impossible" << endl;
    }
}