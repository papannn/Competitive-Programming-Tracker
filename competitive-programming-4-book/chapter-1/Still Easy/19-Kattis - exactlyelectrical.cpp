#include <iostream>

using namespace std;
int main () {
    int xPos, yPos;
    int xDest, yDest;
    int fuel;

    cin >> xPos >> yPos;
    cin >> xDest >> yDest;
    cin >> fuel;

    int dist = 0;
    dist += max(xPos, xDest) - min(xPos, xDest);
    dist += max(yPos, yDest) - min(yPos, yDest);

    if (dist > fuel) {
        cout << "N";
    } else if (dist % 2 == 0 && fuel % 2 == 0) {
        cout << "Y";
    } else if (dist % 2 == 1 && fuel % 2 == 1) {
        cout << "Y";
    } else {
        cout << "N";
    }
    cout << endl;
}