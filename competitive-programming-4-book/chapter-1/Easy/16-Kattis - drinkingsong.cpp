#include <iostream>

using namespace std;
int main () {
    int t;
    string drink;
    cin >> t >> drink;

    while (t != 0) {
        string bottle = (t > 1 ? "bottles" : "bottle");
        string bottle1 = (t - 1 > 1 ? "bottles" : "bottle");
        cout << t << " " << bottle << " of " << drink << " on the wall, " << t << " " << bottle << " of " << drink << "." << endl;
        if (t - 1 >= 1) {
            cout << "Take one down, pass it around, " << t - 1 << " " << bottle1 << " of " << drink << " on the wall." << endl;;
        } else {
            cout << "Take it down, pass it around, no more bottles of " << drink << "." << endl;
        }
        t--;
    }
}