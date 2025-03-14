#include <bits/stdc++.h>

using namespace std;
int main () {
    vector<vector<string>> board(8);
    bool origin = true;
    for (int j = 0 ; j < board.size(); j++) {
        bool isBlack = origin;
        for (int k = 0 ; k < 8; k++) {
            if (isBlack) {
                board[j].push_back(":::");
            } else {
                board[j].push_back("...");
            }
            isBlack = !isBlack;
        }
        origin = !origin;
    }

    string s;
    for (int i = 0 ; i < 2; i++) {
        getline(cin, s);

        int idx = 0;
        while (s[idx] != ' ') {
            idx++;
        }

        idx++;
        for (; idx < s.size(); ) {
            if (islower(s[idx])) {
                char posX = s[idx];
                int x = (posX - 'a');
                int y = (s[idx + 1] - '0') - 1;
                board[y][x][1] = i == 1 ? 'p' : 'P';
                idx += 3;
            } else {
                char posX = s[idx + 1];
                int x = (posX - 'a');
                int y = (s[idx + 2] - '0') - 1;
                board[y][x][1] = i == 1 ?  tolower(s[idx]) : toupper(s[idx]);
                idx += 4;
            }
        }
    }

    for (int j = board.size() - 1; j >= 0; j--) {
        cout << "+---+---+---+---+---+---+---+---+" << endl;
        for (int k = 0 ; k < 8; k++) {
            cout << "|" << board[j][k];
        }
        cout << "|" << endl;
    }
    cout << "+---+---+---+---+---+---+---+---+" << endl;
}