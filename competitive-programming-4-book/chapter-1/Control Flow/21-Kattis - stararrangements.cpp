#include <iostream>
#include <math.h>

using namespace std;
int main(){
    double t;
    cin >> t;
    cout << t << ":" << endl;
    for (int i = 2 ; i <= t / 2 + 1; i++) {
        for (int j = 1; j < t; j++) {
            if (j * i + j * (i - 1) == t || j * i + (j - 1) * (i - 1) == t) {
                cout << i << "," << i - 1 << endl;
                break;
            } else if (j * i + j * (i - 1) > t) {
                break;
            }
        }
        if (fmod(t, i) == 0) {
            cout << i << "," << i << endl;
        }
    }
}