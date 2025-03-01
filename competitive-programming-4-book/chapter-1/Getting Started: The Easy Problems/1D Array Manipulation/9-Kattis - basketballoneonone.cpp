#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;
int main () {
    string t;
    cin >> t;
    int score[2];
    memset(score, 0, sizeof(score));
    bool tieBreaker = false;
    for (int i = 0 ; i < t.length(); i += 2) {
        int who = t[i] - 'A';
        int point = t[i + 1] - '0';
        score[who] += point;

        // cout << "CURR SCORE" << endl;
        // cout << "A: " <<  score[0] << endl;
        // cout << "B: " <<  score[1] << endl;

        if (score[0] == 10 && score[1] == 10) {
            tieBreaker = true;
        }

        char res = t[i];
        if (!tieBreaker && score[who] >= 11) {
            cout << res << endl;
            return 0;
        }

        if (tieBreaker && abs(score[0] - score[1]) >= 2) {
            cout << res << endl;
            return 0;
        }
    }
}