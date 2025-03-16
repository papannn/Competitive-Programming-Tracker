#include <bits/stdc++.h>

using namespace std;
vector<string> board(8);

void bishopMove(int y, int x, unordered_set<string>& attackSet) {
    int currX;
    int currY;

    // Top Left
    currX = x - 1;
    currY = y + 1;
    while (currX >= 0 && currX <= 7 && currY >= 0 && currY <= 7 && (board[currY][currX] == '.' || tolower(board[currY][currX]) == 'k')) {
        attackSet.insert(to_string(currY) + "_" + to_string(currX));

        if (tolower(board[currY][currX]) == 'k') {
            break;
        }

        currX--;
        currY++;
    }

    // Top Right
    currX = x + 1;
    currY = y + 1;
    while (currX >= 0 && currX <= 7 && currY >= 0 && currY <= 7 && (board[currY][currX] == '.' || tolower(board[currY][currX]) == 'k')) {
        attackSet.insert(to_string(currY) + "_" + to_string(currX));

        if (tolower(board[currY][currX]) == 'k') {
            break;
        }

        currX++;
        currY++;
    }

    // Bot Right
    currX = x + 1;
    currY = y - 1;
    while (currX >= 0 && currX <= 7 && currY >= 0 && currY <= 7 && (board[currY][currX] == '.' || tolower(board[currY][currX]) == 'k')) {
        attackSet.insert(to_string(currY) + "_" + to_string(currX));

        if (tolower(board[currY][currX]) == 'k') {
            break;
        }

        currX++;
        currY--;
    }

    // Bot Left
    currX = x - 1;
    currY = y - 1;
    while (currX >= 0 && currX <= 7 && currY >= 0 && currY <= 7 && (board[currY][currX] == '.' || tolower(board[currY][currX]) == 'k')) {
        attackSet.insert(to_string(currY) + "_" + to_string(currX));

        if (tolower(board[currY][currX]) == 'k') {
            break;
        }

        currX--;
        currY--;
    }
}

void rookMove(int y, int x, unordered_set<string>& attackSet) {
    int currX;
    int currY;

    // Top
    currX = x;
    currY = y + 1;
    while (currX >= 0 && currX <= 7 && currY >= 0 && currY <= 7 && (board[currY][currX] == '.' || tolower(board[currY][currX]) == 'k')) {
        attackSet.insert(to_string(currY) + "_" + to_string(currX));

        if (tolower(board[currY][currX]) == 'k') {
            break;
        }

        currY++;
    }

    // Right
    currX = x + 1;
    currY = y;
    while (currX >= 0 && currX <= 7 && currY >= 0 && currY <= 7 && (board[currY][currX] == '.' || tolower(board[currY][currX]) == 'k')) {
        attackSet.insert(to_string(currY) + "_" + to_string(currX));

        if (tolower(board[currY][currX]) == 'k') {
            break;
        }

        currX++;
    }

    // Bot
    currX = x;
    currY = y - 1;
    while (currX >= 0 && currX <= 7 && currY >= 0 && currY <= 7 && (board[currY][currX] == '.' || tolower(board[currY][currX]) == 'k')) {
        attackSet.insert(to_string(currY) + "_" + to_string(currX));

        if (tolower(board[currY][currX]) == 'k') {
            break;
        }

        currY--;
    }

    // Left
    currX = x - 1;
    currY = y;
    while (currX >= 0 && currX <= 7 && currY >= 0 && currY <= 7 && (board[currY][currX] == '.' || tolower(board[currY][currX]) == 'k')) {
        attackSet.insert(to_string(currY) + "_" + to_string(currX));

        if (tolower(board[currY][currX]) == 'k') {
            break;
        }

        currX--;
    }
}

int main () {
    int gameCnt = 1;
    while (true) {
        string s;
        for (int i = 7; i >= 0; i--) {
            cin >> s;
            board[i] = s;
        }

        int cnt = 0;
        for (int i = 0 ; i < 8; i++) {
            for (int j = 0 ; j < 8; j++) {
                if (board[i][j] != '.') {
                    cnt++;
                }
            }
        }

        if (cnt == 0) {
            break;
        }

        unordered_set<string> attackBlack;
        unordered_set<string> attackWhite;
        string whiteKingPos;
        string blackKingPos;
        for (int y = 7 ; y >= 0; y--) {
            for (int x = 0 ; x < 8; x++) {

                if (board[y][x] == 'k') { // Black
                    blackKingPos = to_string(y) + "_" + to_string(x);
                }

                if (board[y][x] == 'K') { // White
                    whiteKingPos = to_string(y) + "_" + to_string(x);
                }

                if (board[y][x] == 'p') { // Black
                    attackBlack.insert(to_string(y - 1) + "_" + to_string(x - 1));
                    attackBlack.insert(to_string(y - 1) + "_" + to_string(x + 1));
                }

                if (board[y][x] == 'P') { // White
                    attackWhite.insert(to_string(y + 1) + "_" + to_string(x - 1));
                    attackWhite.insert(to_string(y + 1) + "_" + to_string(x + 1));
                }

                if (board[y][x] == 'n') { // Black
                    attackBlack.insert(to_string(y + 1) + "_" + to_string(x - 2));
                    attackBlack.insert(to_string(y + 1) + "_" + to_string(x + 2));

                    attackBlack.insert(to_string(y + 2) + "_" + to_string(x - 1));
                    attackBlack.insert(to_string(y + 2) + "_" + to_string(x + 1));

                    attackBlack.insert(to_string(y - 1) + "_" + to_string(x - 2));
                    attackBlack.insert(to_string(y - 1) + "_" + to_string(x + 2));

                    attackBlack.insert(to_string(y - 2) + "_" + to_string(x - 1));
                    attackBlack.insert(to_string(y - 2) + "_" + to_string(x + 1));
                }

                if (board[y][x] == 'N') { // White
                    attackWhite.insert(to_string(y + 1) + "_" + to_string(x - 2));
                    attackWhite.insert(to_string(y + 1) + "_" + to_string(x + 2));

                    attackWhite.insert(to_string(y + 2) + "_" + to_string(x - 1));
                    attackWhite.insert(to_string(y + 2) + "_" + to_string(x + 1));

                    attackWhite.insert(to_string(y - 1) + "_" + to_string(x - 2));
                    attackWhite.insert(to_string(y - 1) + "_" + to_string(x + 2));

                    attackWhite.insert(to_string(y - 2) + "_" + to_string(x - 1));
                    attackWhite.insert(to_string(y - 2) + "_" + to_string(x + 1));
                }

                if (board[y][x] == 'b') { // Black
                    bishopMove(y, x, attackBlack);
                }

                if (board[y][x] == 'B') { // White
                    bishopMove(y, x, attackWhite);
                }

                if (board[y][x] == 'r') { // Black
                    rookMove(y, x, attackBlack);
                }

                if (board[y][x] == 'R') { // WHite
                    rookMove(y, x, attackWhite);
                }

                if (board[y][x] == 'q') { // Black
                    rookMove(y, x, attackBlack);
                    bishopMove(y, x, attackBlack);
                }

                if (board[y][x] == 'Q') {
                    rookMove(y, x, attackWhite);
                    bishopMove(y, x, attackWhite);
                }
            }
        }

        cout << "Game #" << gameCnt++ << ": ";
        if (attackBlack.find(whiteKingPos) != attackBlack.end()) {
            cout << "white king is in check.";
        } else if (attackWhite.find(blackKingPos) != attackWhite.end()) {
            cout << "black king is in check.";
        } else {
            cout << "no king is in check.";
        }
        cout << endl;
    }
}