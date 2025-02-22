#include <iostream>
#include <vector>

using namespace std;
int main () {
    double cap, rateLeak, distance;
    cin >> cap >> rateLeak >> distance;

    vector<int> speedArr(6);
    vector<double> fuelEfficiencyArr(6);

    double res = -1;
    for (int i = 0 ; i < 6; i++) {
        int speed;
        double fuelEfficiency;
        cin >> speed >> fuelEfficiency;
        double duration = distance / speed;
        double spentPerMile = distance / fuelEfficiency;

        if (duration * rateLeak + spentPerMile < cap / 2) {
            res = speed;
        }
    }

    if (res == -1) {
        cout << "NO" << endl;
    } else {
        cout << "YES " << res << endl;
    }
    
}