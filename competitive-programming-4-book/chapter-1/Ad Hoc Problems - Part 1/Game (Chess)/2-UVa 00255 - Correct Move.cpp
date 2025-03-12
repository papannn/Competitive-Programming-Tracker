#include <bits/stdc++.h>

using namespace std;
int main () {
    int king, queen, queenNew;
    while (cin >> king >> queen >> queenNew) {
        if (king == queen) {
            cout << "Illegal state" << endl;
            continue;
        }

        if (king < 0 || king > 63 || queen < 0 || queen > 63) {
            cout << "Illegal state" << endl;
            continue;
        }

        if (queenNew < 0 || queenNew > 63) {
            cout << "Illegal move" << endl;
            continue;
        }

        unordered_set<int> queenAllowedMove;
        // Top
        int queenTemp = queen;
        while (queenTemp >= 0) {
            if (queenTemp == king) {
                break;
            }
            queenAllowedMove.insert(queenTemp);
            queenTemp -= 8;
        }

        // Bottom
        queenTemp = queen;
        while (queenTemp <= 63) {
            if (queenTemp == king) {
                break;
            }
            queenAllowedMove.insert(queenTemp);
            queenTemp += 8;
        }

        // Left
        queenTemp = queen;
        bool found = false;
        while (!found) {
            if (queenTemp == king) {
                break;
            }
            if (queenTemp % 8 == 0) {
                found = true;
            }
            queenAllowedMove.insert(queenTemp);
            queenTemp--;
        }

        // Right
        queenTemp = queen;
        found = false;
        while (!found) {
            if (queenTemp == king) {
                break;
            }
            if ((queenTemp + 1) % 8 == 0) {
                found = true;
            }
            queenAllowedMove.insert(queenTemp);
            queenTemp++;
        }

        queenAllowedMove.erase(queen);

        if (queenAllowedMove.find(queenNew) == queenAllowedMove.end()) {
            cout << "Illegal move" << endl;
            continue;
        }

        int topKing = king - 8 > 0 ? king - 8 : -1;
        int botKing = king + 8 <= 63 ? king + 8 : -1;
        int leftKing = king % 8 == 0 && king <= 63 ? -1 : king - 1;
        int rightKing = king + 1 % 8 == 0 || king >= 63 ? -1 : king + 1;

        if (queenNew == topKing || queenNew == botKing || queenNew == leftKing || queenNew == rightKing) {
            cout << "Move not allowed" << endl;
            continue;
        }


        /////////////////////////////////////

        set<int> queenPossibleMove;
        // Top
        queenTemp = queenNew;
        while (queenTemp >= 0) {
            queenPossibleMove.insert(queenTemp);
            queenTemp -= 8;
        }

        // Bottom
        queenTemp = queenNew;
        while (queenTemp <= 63) {
            queenPossibleMove.insert(queenTemp);
            queenTemp += 8;
        }

        // Left
        queenTemp = queenNew;
        found = false;
        while (!found) {
            if (queenTemp % 8 == 0) {
                found = true;
            }
            queenPossibleMove.insert(queenTemp);
            queenTemp--;
        }

        // Right
        queenTemp = queenNew;
        found = false;
        while (!found) {
            if ((queenTemp + 1) % 8 == 0) {
                found = true;
            }
            queenPossibleMove.insert(queenTemp);
            queenTemp++;
        }

        if ((topKing != -1 && queenPossibleMove.find(topKing) == queenPossibleMove.end()) || (botKing != -1 && queenPossibleMove.find(botKing) == queenPossibleMove.end())
        || (leftKing != -1 && queenPossibleMove.find(leftKing) == queenPossibleMove.end()) || (rightKing != -1 && queenPossibleMove.find(rightKing) == queenPossibleMove.end())) {
            cout << "Continue" << endl;
        } else {
            cout << "Stop" << endl;
        }
    }
}