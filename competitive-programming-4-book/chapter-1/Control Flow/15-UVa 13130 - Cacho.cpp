#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool escala = true;
        for (int i = 0 ; i < 4; i++) {
            int temp;
            cin >> temp;
            if (temp - 1 != n) {
                escala = false;
            }
            n = temp;
        }

        cout << (escala ? "Y" : "N") << endl;
    }
}