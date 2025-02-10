#include <iostream>
#include <math.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        double P, R, F;
        cin >> P >> R >> F;
        cout << floor(log(F / P) / log(R)) + 1 << endl;
    }
}