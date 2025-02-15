#include <iostream>

using namespace std;
int main () {
    // 1 2
    string takahashi;
    // 1 3
    string aoki;
    cin >> takahashi >> aoki;

    bool sick1 = takahashi.compare("sick") == 0;
    bool sick2 = aoki.compare("sick") == 0;

    if (sick1 && sick2) {
        cout << 1 << endl;
    } else  if (sick1 && !sick2) {
        cout << 2 << endl;
    } else if (!sick1 && sick2) {
        cout << 3 << endl;
    } else {
        cout << 4 << endl;
    }
}