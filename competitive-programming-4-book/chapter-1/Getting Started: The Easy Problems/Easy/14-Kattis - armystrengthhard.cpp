#include <iostream>
#include <vector>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long nG, nM;
        cin >> nG >> nM;
        vector<long long> godzillaArmy;
        vector<long long> mechaGodzillaArmy;
        while (nG--) {
            long long power;
            cin >> power;
            godzillaArmy.push_back(power);
        }

        while (nM--) {
            long long power;
            cin >> power;
            mechaGodzillaArmy.push_back(power);
        }

        sort(godzillaArmy.begin(), godzillaArmy.end());
        sort(mechaGodzillaArmy.begin(), mechaGodzillaArmy.end());

        int godzillaPtr = 0;
        int mechaPtr = 0;
        while (godzillaPtr < godzillaArmy.size() && mechaPtr < mechaGodzillaArmy.size()) {
            if (godzillaArmy[godzillaPtr] >= mechaGodzillaArmy[mechaPtr]) {
                mechaPtr++;
            } else {
                godzillaPtr++;
            }
        }

        if (godzillaPtr == godzillaArmy.size()) {
            cout << "MechaGodzilla" << endl;
        } else {
            cout << "Godzilla" << endl;
        }
    }
}