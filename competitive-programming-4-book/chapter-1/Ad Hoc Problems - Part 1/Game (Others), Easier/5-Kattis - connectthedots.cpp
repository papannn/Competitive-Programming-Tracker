#include <bits/stdc++.h>

using namespace std;
int main () {
    string s;
    bool flag = true;
    while (getline(cin, s)) {
        if (!flag) {
            cout << endl;
        } else {
            flag = false;
        }
        
        vector<string> board;
        board.push_back(s);

        while (getline(cin, s) && s.length() != 0) {
            board.push_back(s);
        }

        unordered_map<char, pair<int, int>> mapping;
        for (int i = 0 ; i < board.size(); i++) {
            for (int j = 0 ; j < board[i].length(); j++) {
                if (board[i][j] != '.') {
                    mapping[board[i][j]] = make_pair(i, j);
                }
            }
        }

        char lastChar;
        if (mapping.size() > 36) {
            lastChar = mapping.size() - 37 + 'A';
        } else if (mapping.size() > 10) {
            lastChar = mapping.size() - 11 + 'a';
        } else {
            lastChar = mapping.size() - 1 + '0';
        }

        char c = '0';
        for (int i = 0 ; i < mapping.size() - 1 && mapping.size(); i++) {
            char nextChar;
            if (c == '9') {
                nextChar = 'a';
            } else if (c == 'z') {
                nextChar = 'A';
            } else {
                nextChar = c + 1;
            }
            
            pair<int, int> pos = mapping[c];
            pair<int, int> posNext = mapping[nextChar];
            int x = 0;
            int y = 0;
            bool upDown = true;
            if (pos.first < posNext.first) { // Bot
                y = 1;
            } else if (pos.first > posNext.first) { // Up
                y = -1;
            } else if (pos.second < posNext.second) { // Right
                x = 1;
                upDown = false;
            } else { // Left
                x = -1;
                upDown = false;
            }
            
            int currY = pos.first;
            int currX = pos.second;
            currY = pos.first;
            currX = pos.second;
            while (board[currY][currX] != nextChar) {
                if (upDown) {
                    if (board[currY][currX] == '.') {
                        board[currY][currX] = '|';
                    } 
                    if (board[currY][currX] == '-') {
                        board[currY][currX] = '+';
                    }
                } else {
                    if (board[currY][currX] == '.') {
                        board[currY][currX] = '-';
                    } 
                    if (board[currY][currX] == '|') {
                        board[currY][currX] = '+';
                    }
                }

                currY += y;
                currX += x;
            }

            c = nextChar;
        }

        for (int i = 0 ; i < board.size(); i++) {
            cout << board[i] << endl;
        }
    }
}