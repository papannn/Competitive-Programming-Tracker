#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int playerCnt, numSnakeLadder, dieCount;
        cin >> playerCnt >> numSnakeLadder >> dieCount;
        
        unordered_map<int, int> mapping;
        while (numSnakeLadder--) {
            int pos, dest;
            cin >> pos >> dest;
            mapping[pos] = dest;
        }

        vector<int> playerPos(playerCnt);
        for (int i = 0 ; i < playerCnt; i++) {
            playerPos[i] = 1;
        }

        int player = 0;
        bool ignore = false;
        while (dieCount--) {
            int dieNum;
            cin >> dieNum;
            if (!ignore) {
                playerPos[player] += dieNum;
                if (mapping[playerPos[player]] != 0) {
                    playerPos[player] = mapping[playerPos[player]];
                }
            }
            

            if (playerPos[player] == 100) {
                ignore = true;
            }

            player++;
            if (player == playerCnt) {
                player = 0;
            }
        }

        for (int i = 0 ; i < playerCnt; i++) {
            cout << "Position of player " << i + 1 << " is " << playerPos[i] << "." << endl;
        }
    }
}