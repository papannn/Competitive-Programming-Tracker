#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;

    while (cin >> n) {
        if (n == 0) {
            break;
        }

        int up = 1;
        int down = 6;
        int north = 2;
        int south = 5;
        int west = 3;
        int east = 4;

        while (n--) {
            string s;
            cin >> s;
            if (s.compare("west") == 0) {
                int tempEast = east;
                int tempUp = up;
                int tempDown = down;
                int tempWest = west;
                up = tempEast;
                down = tempWest;
                west = tempUp;
                east = tempDown;
            } else if (s.compare("east") == 0) {
                int tempEast = east;
                int tempUp = up;
                int tempDown = down;
                int tempWest = west;
                up = tempWest;
                west = tempDown;
                down = tempEast;
                east = tempUp;
            } else if (s.compare("north") == 0) {
                int tempNorth = north;
                int tempUp = up;
                int tempDown = down;
                int tempSouth = south;
                north = tempUp;
                up = tempSouth;
                down = tempNorth;
                south = tempDown;
            } else if (s.compare("south") == 0) {
                int tempNorth = north;
                int tempUp = up;
                int tempDown = down;
                int tempSouth = south;
                south = tempUp;
                up = tempNorth;
                down = tempSouth;
                north = tempDown;
            }
        }
        cout << up << endl;
        
    }
}