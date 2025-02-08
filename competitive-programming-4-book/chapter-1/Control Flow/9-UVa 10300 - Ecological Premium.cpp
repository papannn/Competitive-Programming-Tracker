#include <iostream>
#include <math.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        double res = 0;
        int farmer;
        cin >> farmer;
        while (farmer--) {
            double field, animal, env;
            cin >> field >> animal >> env;
            res += field / animal * env * animal;
        }
        cout << res << endl;
    }
}