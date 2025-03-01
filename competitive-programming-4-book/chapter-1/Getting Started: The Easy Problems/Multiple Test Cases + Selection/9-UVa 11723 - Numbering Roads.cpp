#include <iostream>
#include <math.h>

using namespace std;
int main () {
    double N, R;
    cin >> N >> R;
    int counter = 1;
    while (N != 0 || R != 0) {
        cout << "Case " << counter++ << ": ";
        if ((N - R) > (R * 26)) {
            cout << "impossible" << endl;
        } else {
            cout << abs(ceil((N - R) / R)) << endl;
        }
        cin >> N >> R;
    }
}