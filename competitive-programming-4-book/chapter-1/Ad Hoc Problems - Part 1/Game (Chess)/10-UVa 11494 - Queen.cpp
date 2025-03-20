#include <bits/stdc++.h>

using namespace std;
int main () {
    int col, row, targetCol, targetRow;
    while (cin >> col >> row >> targetCol >> targetRow) {
        if (col == 0 && row == 0 && targetCol == 0 && targetRow == 0) {
            break;
        }

        if (col == targetCol && row == targetRow) {
            cout << 0 << endl;
            continue;
        }

        if (col == targetCol || row == targetRow) {
            cout << 1 << endl;
            continue;
        }

        int diffCol = abs(col - targetCol);
        if (abs(row - targetRow) == diffCol) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
}