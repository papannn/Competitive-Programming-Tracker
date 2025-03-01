#include <iostream>

using namespace std;
int main () {
    int pos, lock1, lock2, lock3;
    cin >> pos >> lock1 >> lock2 >> lock3;
    while (pos != 0 || lock1 != 0 || lock2 != 0 || lock3 != 0) {
        int res = 0;
        res += 720;

        while (pos != lock1) { 
            res += 9;
            pos--;
            if (pos == -1) {
                pos = 39;
            }
        }

        res += 360;

        while (pos != lock2) {
            res += 9;
            pos++;
            if (pos == 40) {
                pos = 0;
            }
        }

        while (pos != lock3) {
            res += 9;
            pos--;
            if (pos == -1) {
                pos = 39;
            }
        }

        cout << res << endl;

        cin >> pos >> lock1 >> lock2 >> lock3;
    }
}