#include <bits/stdc++.h>

using namespace std;
int main () {
    int c;
    cin >> c;
    while (c--) {
        int t;
        cin >> t;

        long long N;
        cin >> N;
        while (t--) {
            long long row, col, rowTarget, colTarget;
            cin >> row >> col >> rowTarget >> colTarget;

            if (rowTarget < 1 || rowTarget > N || colTarget < 1 || colTarget > N) {
                cout << "no move" << endl;
                continue;
            }

            bool isCurrBlack;
            bool isTargetBlack;
            if (row % 2 == 1) { // 
                if (col % 2 == 1) {
                    isCurrBlack = true;
                } else {
                    isCurrBlack = false;
                }
            } else {
                if (col % 2 == 1) {
                    isCurrBlack = false;
                } else {
                    isCurrBlack = true;
                }
            }

            if (rowTarget % 2 == 1) { // 
                if (colTarget % 2 == 1) {
                    isTargetBlack = true;
                } else {
                    isTargetBlack = false;
                }
            } else {
                if (colTarget % 2 == 1) {
                    isTargetBlack = false;
                } else {
                    isTargetBlack = true;
                }
            }
            
            if (isCurrBlack != isTargetBlack) {
                cout << "no move" << endl;
                continue;
            }

            if (row == rowTarget && col == colTarget) {
                cout << 0 << endl;
                continue;
            }

            long long rowDiff = abs(row - rowTarget);
            if (abs(col - colTarget) == rowDiff) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        }
    }
}