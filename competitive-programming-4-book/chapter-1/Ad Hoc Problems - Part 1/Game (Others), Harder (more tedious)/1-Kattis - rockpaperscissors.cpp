#include <bits/stdc++.h>

using namespace std;
int main () {
    int player, game;
    while (cin >> player >> game) {
        if (player == 0) {
            break;
        }
        vector<double> win(player);
        vector<double> play(player);
        while (game--) {
            int p1, p2;
            string guess1, guess2;

            cin >> p1 >> guess1 >> p2 >> guess2;
            play[p1 - 1]++;
            play[p2 - 1]++;
            if (guess1.compare("rock") == 0) {
                // Rock p1
                if (guess2.compare("rock") == 0) {
                    // Rock p2
                    play[p1 - 1]--;
                    play[p2 - 1]--;
                } else if (guess2.compare("paper") == 0) {
                    // Paper p2
                    win[p2 - 1]++;
                } else if (guess2.compare("scissors") == 0) {
                    // Scissor p2
                    win[p1 - 1]++;
                }
            } else if (guess1.compare("paper") == 0) {
                // Paper p1
                if (guess2.compare("rock") == 0) {
                    // Rock p2
                    win[p1 - 1]++;
                } else if (guess2.compare("paper") == 0) {
                    // Paper p2
                    play[p1 - 1]--;
                    play[p2 - 1]--;
                } else if (guess2.compare("scissors") == 0) {
                    // Scissor p2
                    win[p2 - 1]++;
                }
            } else if (guess1.compare("scissors") == 0) {
                // Scissor p1
                if (guess2.compare("rock") == 0) {
                    // Rock p2
                    win[p2 - 1]++;
                } else if (guess2.compare("paper") == 0) {
                    // Paper p2
                    win[p1 - 1]++;
                } else if (guess2.compare("scissors") == 0) {
                    // Scissor p2
                    play[p1 - 1]--;
                    play[p2 - 1]--;
                }
            }
        }

        for (int i = 0 ; i < player; i++) {
            if (play[i] == 0) {
                cout << "-" << endl;
                continue;
            }

            if (win[i] == 0) {
                cout << fixed << setprecision(3) << 0.000 << endl;
                continue;
            }
            cout << fixed << setprecision(3) << win[i] / play[i] << endl;
        }
        cout << endl;
    }
}
