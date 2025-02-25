#include <iostream>

using namespace std;
int main () {
    double height, distanceClimb, slide, fatigueFactor;
    while (cin >> height >> distanceClimb >> slide >> fatigueFactor) {
        if (height == 0) {
            break;
        }

        int day = 1;
        double pos = 0;
        double fatigueLoss = distanceClimb * fatigueFactor / 100;
        while (pos >= 0) {
            pos += distanceClimb > 0 ? distanceClimb : 0;
            distanceClimb -= fatigueLoss;
            if (pos > height) {
                break;
            }

            pos -= slide;

            if (pos < 0) {
                break;
            }
            day++;
        }

        if (pos < 0) {
            cout << "failure ";
        } else {
            cout << "success ";
        }

        cout << "on day " << day << endl;
    }
}