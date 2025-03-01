#include <iostream>

using namespace std;
int main () {
    int w, l;
    while (cin >> w >> l) {
        if (w == 0 && l == 0) {
            break;
        }

        int xReal = 0, yReal = 0;
        int xFake = 0, yFake = 0;
        int n;
        cin >> n;
        while (n--) {
            char c;
            int add;
            cin >> c >> add;
            if (c == 'u') {
                yFake += add;
                yReal += add;
            } else if (c == 'd') {
                yFake -= add;
                yReal -= add;
            } else if (c == 'l') {
                xFake -= add;
                xReal -= add;
            } else if (c == 'r') {
                xFake += add;
                xReal += add;
            }

            if (yReal < 0) {
                yReal = 0;
            }

            if (xReal < 0) {
                xReal = 0;
            }

            if (yReal >= l) {
                yReal = l - 1;
            }

            if (xReal >= w) {
                xReal = w - 1;
            }
        }
        cout << "Robot thinks " << xFake << " " << yFake << endl;
        cout << "Actually at " << xReal << " " << yReal << endl << endl;
    }
}