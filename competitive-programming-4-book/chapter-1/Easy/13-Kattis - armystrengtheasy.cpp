#include <iostream>
#include <vector>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int nG, nM;
        cin >> nG >> nM;
        vector<int> godzillaArmy;
        vector<int> mechaGodzillaArmy;
        while (nG--) {
            int power;
            cin >> power;
            godzillaArmy.push_back(power);
        }

        while (nM--) {
            int power;
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