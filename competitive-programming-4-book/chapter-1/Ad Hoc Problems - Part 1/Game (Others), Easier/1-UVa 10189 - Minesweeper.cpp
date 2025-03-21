#include <bits/stdc++.h>

using namespace std;
int main () {
    int n, m;
    int cnt = 1;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) {
            break;
        }

        if (cnt != 1) {
            cout << endl;
        }

        vector<string> board;
        for (int i = 0 ; i < n; i++) {
            string s;
            cin >> s;
            board.push_back(s);
        }

        for (int i = 0 ; i < board.size(); i++) {
            for (int j = 0 ; j < board[i].size(); j++) {
                if (board[i][j] == '*') {
                    continue;
                }

                int count = 0;
                for (int k = -1; k <= 1; k++) {
                    for (int l = -1; l <= 1; l++) {
                        if (i + k < 0 || i + k >= board.size()) {
                            continue;
                        }

                        if (j + l < 0 || j + l >= board[i].size()) {
                            continue;
                        }

                        if (board[i + k][j + l] == '*') {
                            count++;
                        }
                    }
                }
                board[i][j] = '0' + count;
            }
        }

        cout << "Field #" << cnt++ << ":" << endl;
        for (int i = 0 ; i < board.size(); i++) {
            for (int j = 0 ; j < board[i].size(); j++) {
                cout << board[i][j];
            }
            cout << endl;
        }
    }
}