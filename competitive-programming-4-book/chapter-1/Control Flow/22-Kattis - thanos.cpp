#include <iostream>
#include <math.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        double P, R, F;
        cin >> P >> R >> F;
        int year = 0;
        while (P <= F) {
            P = P * R;
            year++;
        }
        cout << year << endl;
    }
}