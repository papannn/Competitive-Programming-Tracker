#include <iostream>

using namespace std;
int main() {
    int t;
    cin >> t;
    int c = 0;
    while (t--) {
        c++;
        int l, w, h;
        cin >> l >> w >> h;
        cout << "Case " << c << ": ";
        if (l > 20 || w > 20 || h > 20) {
            cout << "bad";
        } else {
            cout << "good";
        }
        cout << endl;

    }
}