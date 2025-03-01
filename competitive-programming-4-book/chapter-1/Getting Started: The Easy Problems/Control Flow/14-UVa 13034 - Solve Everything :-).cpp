#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    int count = 1;
    while (t--) {
        bool solveable = true;
        for (int i = 0 ; i < 13; i++) {
            int n;
            cin >> n;
            if (n <= 0) {
                solveable = false;
            }
        }
        cout << "Set #" << count++ << ": ";
        cout << (solveable ? "Yes" : "No") << endl;
    }
}