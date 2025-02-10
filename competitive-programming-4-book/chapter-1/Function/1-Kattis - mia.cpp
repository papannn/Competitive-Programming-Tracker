#include <iostream>

using namespace std;
int main () {
    int d1, d2, d3, d4;
    cin >> d1 >> d2 >> d3 >> d4;
    while (d1 != 0 && d2 != 0 && d3 != 0 && d4 != 0) {
        int max1 = max(d1, d2);
        int min1 = min(d1, d2);

        int max2 = max(d3, d4);
        int min2 = min(d3, d4);

        int val1 = max1 * 10 + min1;
        int val2 = max2 * 10 + min2;

        int rank1 = 1;
        int rank2 = 1;
        if (val1 == 21) {
            rank1 = 3;
        } else if (val1 == 11 || val1 == 22 || val1 == 33 || val1 == 44 || val1 == 55 || val1 == 66) {
            rank1 = 2;
        }

        if (val2 == 21) {
            rank2 = 3;
        } else if (val2 == 11 || val2 == 22 || val2 == 33 || val2 == 44 || val2 == 55 || val2 == 66) {
            rank2 = 2;
        }

        if (rank1 > rank2) {
            cout << "Player 1 wins." << endl;
        } else if (rank1 < rank2) {
            cout << "Player 2 wins." << endl;
        } else {
            if (val1 > val2) {
                cout << "Player 1 wins." << endl;
            } else if (val1 < val2) {
                cout << "Player 2 wins." << endl;
            } else {
                cout << "Tie." << endl;
            }
        }
        cin >> d1 >> d2 >> d3 >> d4;
    }
}