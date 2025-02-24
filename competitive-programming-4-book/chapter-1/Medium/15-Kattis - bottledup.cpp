#include <iostream>

using namespace std;
int main () {
    int s, v1, v2;
    cin >> s >> v1 >> v2;

    if (s % v1 == 0) {
        cout << s / v1 << " " << 0 << endl;
        return 0;
    }

    int div = s / v1 + 1;
    while (div--) {
        if ((s - v1 * div) % v2 == 0) {
            cout << div << " " << (s - v1 * div) / v2 << endl;
            return 0;
        }
    }
    if (s % v2 == 0) {
        cout << 0 << " " << s / v2 << endl;
    } else {
        cout << "Impossible" << endl;
    }
    
}