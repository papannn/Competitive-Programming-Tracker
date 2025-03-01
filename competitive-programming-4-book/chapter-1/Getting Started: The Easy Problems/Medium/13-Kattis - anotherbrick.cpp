#include <iostream>

using namespace std;

int main () {
    int h, w, n;
    cin >> h >> w >> n;
    int counterHeight = 0;
    int counterWidth = 0;
    while (n--) {
        int num;
        cin >> num;
        counterWidth += num;

        if (counterWidth > w) {
            break;
        }

        if (counterWidth == w) {
            counterWidth = 0;
            counterHeight++;
        }

        if (counterHeight == h) {
            break;
        }
    }

    cout << (counterHeight == h ? "YES" : "NO") << endl;
}