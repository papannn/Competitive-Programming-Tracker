#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    int res = 0;
    while (t--) {
        double length, width, depth, weight;
        cin >> length >> width >> depth >> weight;

        bool allowed = true;
        bool sizeAllow = true;
        bool circumferenceAllow = true;

        sizeAllow &= length <= 56;
        sizeAllow &= width <= 45;
        sizeAllow &= depth <= 25;
        circumferenceAllow &= length + width + depth <= 125;
        allowed &= sizeAllow || circumferenceAllow;
        allowed &= weight <= 7;

        if (allowed) {
            res++;
        }

        cout << (allowed ? 1 : 0) << endl;
    }
    cout << res << endl;
}