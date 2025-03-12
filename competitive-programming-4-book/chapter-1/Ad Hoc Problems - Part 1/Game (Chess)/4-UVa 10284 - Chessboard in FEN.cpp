#include <bits/stdc++.h>

using namespace std;
int main () {
    string board;
    while (cin >> board) {
        int row = 7;
        vector<vector<char>> arrBoard(8);
        for (int i = 0 ; i < board.size(); i++) {
            if (board[i] == '/') {
                row--;
                continue;
            }

            if (isdigit(board[i])) {
                int emptyBoard = board[i] - '0';
                while (emptyBoard--) {
                    arrBoard[row].push_back(' ');
                }
                continue;
            }

            arrBoard[row].push_back(board[i]);
        }

        unordered_set<string> attackPossible;
        for (int i = 7 ; i >= 0; i--) {
            for (int j = 0; j < 8; j++) {
                if (arrBoard[i][j] == 'p') {
                    attackPossible.insert(to_string(i - 1) + "_" + to_string(j + 1));
                    attackPossible.insert(to_string(i - 1) + "_" + to_string(j - 1));
                    continue;
                }

                if (arrBoard[i][j] == 'P') {
                    attackPossible.insert(to_string(i + 1) + "_" + to_string(j + 1));
                    attackPossible.insert(to_string(i + 1) + "_" + to_string(j - 1));
                    continue;
                }

                if (arrBoard[i][j] == 'n' || arrBoard[i][j] == 'N') {
                    attackPossible.insert(to_string(i + 1) + "_" + to_string(j - 2));
                    attackPossible.insert(to_string(i + 1) + "_" + to_string(j + 2));

                    attackPossible.insert(to_string(i - 1) + "_" + to_string(j - 2));
                    attackPossible.insert(to_string(i - 1) + "_" + to_string(j + 2));

                    attackPossible.insert(to_string(i - 2) + "_" + to_string(j - 1));
                    attackPossible.insert(to_string(i - 2) + "_" + to_string(j + 1));

                    attackPossible.insert(to_string(i + 2) + "_" + to_string(j - 1));
                    attackPossible.insert(to_string(i + 2) + "_" + to_string(j + 1));
                    continue;
                }

                if (arrBoard[i][j] == 'b' || arrBoard[i][j] == 'B') {
                    int x;
                    int y;

                    // Top left
                    x = j;
                    y = i;
                    x--;
                    y++;
                    while (x >= 0 && y <= 7 && arrBoard[y][x] == ' ') {
                        attackPossible.insert(to_string(y) + "_" + to_string(x));
                        x--;
                        y++;
                    }

                    // Top right
                    x = j;
                    y = i;
                    x++;
                    y++;
                    while (x <= 7 && y <= 7 && arrBoard[y][x] == ' ') {
                        attackPossible.insert(to_string(y) + "_" + to_string(x));
                        x++;
                        y++;
                    }

                    // Bot left
                    x = j;
                    y = i;
                    x--;
                    y--;
                    while (x >= 0 && y >= 0 && arrBoard[y][x] == ' ') {
                        attackPossible.insert(to_string(y) + "_" + to_string(x));
                        x--;
                        y--;
                    }

                    // Bot Right
                    x = j;
                    y = i;
                    x++;
                    y--;
                    while (x <= 7 && y >= 0 && arrBoard[y][x] == ' ') {
                        attackPossible.insert(to_string(y) + "_" + to_string(x));
                        x++;
                        y--;
                    }
                    continue;
                }

                if (arrBoard[i][j] == 'r' || arrBoard[i][j] == 'R') {
                    int x;
                    int y;

                    // Top
                    x = j;
                    y = i;
                    y++;
                    while (y <= 7 && arrBoard[y][x] == ' ') {
                        attackPossible.insert(to_string(y) + "_" + to_string(x));
                        y++;
                    }

                    // Bot
                    x = j;
                    y = i;
                    y--;
                    while (y >= 0 && arrBoard[y][x] == ' ') {
                        attackPossible.insert(to_string(y) + "_" + to_string(x));
                        y--;
                    }

                    // Left
                    x = j;
                    y = i;
                    x--;
                    while (x >= 0 && arrBoard[y][x] == ' ') {
                        attackPossible.insert(to_string(y) + "_" + to_string(x));
                        x--;
                    }

                    // Right
                    x = j;
                    y = i;
                    x++;
                    while (x <= 7 && arrBoard[y][x] == ' ') {
                        attackPossible.insert(to_string(y) + "_" + to_string(x));
                        x++;
                    }
                    continue;
                }

                if (arrBoard[i][j] == 'q' || arrBoard[i][j] == 'Q') {
                    int x;
                    int y;

                    // Top
                    x = j;
                    y = i;
                    y++;
                    while (y <= 7 && arrBoard[y][x] == ' ') {
                        attackPossible.insert(to_string(y) + "_" + to_string(x));
                        y++;
                    }
                    // Bot
                    x = j;
                    y = i;
                    y--;
                    while (y >= 0 && arrBoard[y][x] == ' ') {
                        attackPossible.insert(to_string(y) + "_" + to_string(x));
                        y--;
                    }

                    // Left
                    x = j;
                    y = i;
                    x--;
                    while (x >= 0 && arrBoard[y][x] == ' ') {
                        attackPossible.insert(to_string(y) + "_" + to_string(x));
                        x--;
                    }

                    // Right
                    x = j;
                    y = i;
                    x++;
                    while (x <= 7 && arrBoard[y][x] == ' ') {
                        attackPossible.insert(to_string(y) + "_" + to_string(x));
                        x++;
                    }

                    // Top left
                    x = j;
                    y = i;
                    x--;
                    y++;
                    while (x >= 0 && y <= 7 && arrBoard[y][x] == ' ') {
                        attackPossible.insert(to_string(y) + "_" + to_string(x));
                        x--;
                        y++;
                    }

                    // Top right
                    x = j;
                    y = i;
                    x++;
                    y++;
                    while (x <= 7 && y <= 7 && arrBoard[y][x] == ' ') {
                        attackPossible.insert(to_string(y) + "_" + to_string(x));
                        x++;
                        y++;
                    }

                    // Bot left
                    x = j;
                    y = i;
                    x--;
                    y--;
                    while (x >= 0 && y >= 0 && arrBoard[y][x] == ' ') {
                        attackPossible.insert(to_string(y) + "_" + to_string(x));
                        x--;
                        y--;
                    }

                    // Bot Right
                    x = j;
                    y = i;
                    x++;
                    y--;
                    while (x <= 7 && y >= 0 && arrBoard[y][x] == ' ') {
                        attackPossible.insert(to_string(y) + "_" + to_string(x));
                        x++;
                        y--;
                    }

                    continue;
                }

                if (arrBoard[i][j] == 'k' || arrBoard[i][j] == 'K') {
                    attackPossible.insert(to_string(i + 1) + "_" + to_string(j));
                    attackPossible.insert(to_string(i - 1) + "_" + to_string(j));
                    
                    attackPossible.insert(to_string(i) + "_" + to_string(j + 1));
                    attackPossible.insert(to_string(i) + "_" + to_string(j - 1));

                    attackPossible.insert(to_string(i + 1) + "_" + to_string(j + 1));
                    attackPossible.insert(to_string(i + 1) + "_" + to_string(j - 1));

                    attackPossible.insert(to_string(i - 1) + "_" + to_string(j + 1));
                    attackPossible.insert(to_string(i - 1) + "_" + to_string(j - 1));
                    continue;
                }
            }
        }
        int res = 0;
        for (int i = 7 ; i >= 0; i--) {
            for (int j = 0; j < 8; j++) {
                if (arrBoard[i][j] == ' ') {
                    if (attackPossible.find(to_string(i) + "_" + to_string(j)) == attackPossible.end()) {
                        res++;
                    }
                }
            }
        }

        cout << res << endl;
    }
}