#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    bool flag = true;
    while (t--) {
        if (flag) {
            flag = false;
        } else {
            cout << endl;
        }
        
        int n;
        cin >> n;
        vector<string> board;
        for (int i = 0 ; i < n; i++) {
            string s;
            cin >> s;
            board.push_back(s);
        }

        vector<string> guess;
        for (int i = 0 ; i < n; i++) {
            string s;
            cin >> s;
            guess.push_back(s);
        }

        bool explode = false;
        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < n; j++) {
                if (guess[i][j] == '.') {
                    continue;
                }

                if (board[i][j] == '*') {
                    explode = true;
                }
            }
        }

        for (int i = 0 ; i < n ; i++) {
            for (int j = 0 ; j < guess[i].length(); j++) {
                if (!explode && guess[i][j] == '.') {
                    continue;
                }

                int count = 0;
                for (int k = -1; k <= 1; k++) {
                    if (i + k < 0 || i + k == n) {
                        continue;
                    }
                    for (int l = -1; l <= 1; l++) {
                        if (j + l < 0 || j + l == n) {
                            continue;
                        }

                        if (k == 0 && l == 0) {
                            continue;
                        }

                        if (board[i + k][j + l] == '*') {
                            count++;
                        }
                    }
                }

                if (explode) {
                    if (board[i][j] == '*') {
                        guess[i][j] = '*';
                    } else if (guess[i][j] == '.') {
                        guess[i][j] = '.';
                    } else {
                        guess[i][j] = count + '0';
                    }
                } else {
                    guess[i][j] = count + '0';
                }
            }
        }

        for (int i = 0 ; i < n; i++) {
            cout << guess[i] << endl;
        }
    }
}